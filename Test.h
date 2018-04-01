#include <iostream>
#include <fstream>
#include "ball.h"
#include "parallelepiped.h"
#include "tetraedr.h"
#include "shape.h"
//#include "container.h"
#include "FilesCmp.h"

using namespace std;

class BallTest : public ::testing::Test {
};

TEST_F(BallTest, CheckVolume) {
	ball b;
	b.r = 1;
	b.d = 0;
	double expected = 4.18667;
	ASSERT_NEAR(expected, b.Volume(), 0.01);
}

TEST_F(BallTest, CheckInput) {
	ifstream ifst("InBall.txt");
	ball actual;
	actual.InData(ifst);
	ball b;
	b.r = 2;
	b.d = 3;
	
	ASSERT_EQ(actual.r, b.r);
	ASSERT_NEAR(actual.d, b.d, 0.01);
}

TEST_F(BallTest, CheckOutput) {
	ofstream ofst("OutTest.txt");
 	ball b;
 	b.r = 2;
 	b.d = 3;
	b.temperature = 4;
	b.Out(ofst);
 	ofst.close();
	
 	ifstream expected("OutBall.txt");
 	ifstream actual("OutTest.txt");
 	bool flag = FilesCmp(expected, actual);
 	ASSERT_TRUE(flag);
}

//##########################################################################################################
//##########################################################################################################

class ParallelepipedTest : public ::testing::Test {
};

TEST_F(ParallelepipedTest, CheckVolume) {
	parallelepiped p;
	p.a = 1;
	p.b = 2;
	p.c = 3;
	p.d = 0;
	double expected = 6;
	ASSERT_EQ(expected, p.Volume());
}

TEST_F(ParallelepipedTest, CheckInput) {
	ifstream ifst("InParallelepiped.txt");
	parallelepiped actual;
	actual.InData(ifst);
	parallelepiped p;
	p.a = 2;
	p.b = 2;
	p.c = 2;
	p.d = 3;
	
	ASSERT_EQ(actual.a, p.a);
	ASSERT_EQ(actual.b, p.b);
	ASSERT_EQ(actual.c, p.c);
	ASSERT_NEAR(actual.d, p.d, 0.01);
}

TEST_F(ParallelepipedTest, CheckOutput) {
	ofstream ofst("OutTest.txt");
	parallelepiped p;
	p.a = 2;
	p.b = 2;
	p.c = 2;
	p.d = 3;
	p.temperature = 4;
	p.OutParallelepiped(ofst);
	ofst.close();

	ifstream expected("OutParallelepiped.txt");
	ifstream actual("OutTest.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

////##########################################################################################################
////##########################################################################################################

class TetraedrTest : public ::testing::Test {
};

TEST_F(TetraedrTest, CheckVolume) {
	tetraedr t;
	t.a = 6;
	t.d = 0;
	t.temperature = 4;
	double expected = 25.4558;
	ASSERT_NEAR(expected, t.Volume(), 0.01);
}

TEST_F(TetraedrTest, CheckInput) {
	ifstream ifst("InTetraedr.txt");
	tetraedr actual;
	actual.InData(ifst);
	tetraedr t;
	t.a = 2;
	t.d = 3;
	
	ASSERT_EQ(actual.a, t.a);
	ASSERT_NEAR(actual.d, t.d, 0.01);
}

TEST_F(TetraedrTest, CheckOutput) {
 	ofstream ofst("OutTest.txt");
 	shape* s;
 	tetraedr t;
 	t.a = 2;
 	t.d = 3;
	t.temperature = 4;
 	t.OutTetraedr(ofst);
 	ofst.close();
 
 	ifstream expected("OutTetraedr.txt");
 	ifstream actual("OutTest.txt");
 	bool flag = FilesCmp(expected, actual);
 	ASSERT_TRUE(flag);
}
////##########################################################################################################
////##########################################################################################################

class ShapeTest : public ::testing::Test {
};

TEST_F(ShapeTest, CheckInputBall) {
	ifstream ifst("ShapeInBall.txt");
	shape *actual = shape::In(ifst);
	ball* actual_ball = (ball *)actual;

	ball expected;
	expected.r = 2;
	expected.d = 3;
	expected.temperature = 4;

	ASSERT_EQ(expected.r, actual_ball->r);
	ASSERT_EQ(expected.d, actual_ball->d);
	ASSERT_EQ(expected.temperature, actual_ball->temperature);
}

TEST_F(ShapeTest, CheckInputParallelepiped) {
	ifstream ifst("ShapeInParallelepiped.txt");
	shape *actual = shape::In(ifst);
	parallelepiped* actual_parallelepiped = (parallelepiped *)actual;

	parallelepiped expected;
	expected.a = 2;
	expected.b = 2;
	expected.c = 2;
	expected.d = 3;
	expected.temperature = 4;

	ASSERT_EQ(expected.a, actual_parallelepiped->a);
	ASSERT_EQ(expected.b, actual_parallelepiped->b);
	ASSERT_EQ(expected.c, actual_parallelepiped->c);
	ASSERT_EQ(expected.d, actual_parallelepiped->d);
	ASSERT_EQ(expected.temperature, actual_parallelepiped->temperature);
}

TEST_F(ShapeTest, CheckInputTetraedr) {
	ifstream ifst("ShapeInTetraedr.txt");
	shape *actual = shape::In(ifst);
	tetraedr* actual_tetraedr = (tetraedr *)actual;

	tetraedr expected;
	expected.a = 2;
	expected.d = 3;
	expected.temperature = 4;

	ASSERT_EQ(expected.a, actual_tetraedr->a);
	ASSERT_EQ(expected.d, actual_tetraedr->d);
	ASSERT_EQ(expected.temperature, actual_tetraedr->temperature);
}

TEST_F(ShapeTest, CheckCompare) {
	ball b1;
	b1.r = 3;

	ball b2;
	b2.r = 4;

	ASSERT_TRUE(b1.Compare(b2));
}

//#############################################################################################
//#############################################################################################
class ContainerTest : public ::testing::Test {
};

TEST_F(ContainerTest, CheckInitContainer) {
	container c;
	ASSERT_EQ(c.len, 0);
}

TEST_F(ContainerTest, CheckClearEmptyContainer) {

	container c;
	c.Clear();

	ASSERT_EQ(c.len, 0);
}

TEST_F(ContainerTest, CheckClearContainer) {

	container c;
	c.len = 0;
	shape* b = new ball;
	c.cont[c.len] = b;
	++c.len;
	c.Clear();

	ASSERT_EQ(c.len, 0);
}

TEST_F(ContainerTest, CheckOutBall) {
	ofstream ofst("OutTest.txt");

	container c;

	ball *b = new ball;
	b->r = 2;
	b->d = 3;
	b->temperature = 4;
	shape *s1 = new ball;
	s1 = b;
	c.cont[c.len] = s1;
	++c.len;

	parallelepiped *p = new parallelepiped;
	p->a = 2;
	p->b = 2;
	p->c = 2;
	p->d = 3;
	p->temperature = 4;
	shape *s2 = new parallelepiped;
	s2 = p;
	c.cont[c.len] = s2;
	++c.len;

	tetraedr *t = new tetraedr;
	t->a = 2;
	t->d = 3;
	t->temperature = 4;
	shape *s3 = new tetraedr;
	s3 = t;
	c.cont[c.len] = s3;
	++c.len;

	c.OutBall(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerOutBall.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckOutParallelepiped) {
	ofstream ofst("OutTest.txt");

	container c;

	ball *b = new ball;
	b->r = 2;
	b->d = 3;
	b->temperature = 4;
	shape *s1 = new ball;
	s1 = b;
	c.cont[c.len] = s1;
	++c.len;

	parallelepiped *p = new parallelepiped;
	p->a = 2;
	p->b = 2;
	p->c = 2;
	p->d = 3;
	p->temperature = 4;
	shape *s2 = new parallelepiped;
	s2 = p;
	c.cont[c.len] = s2;
	++c.len;

	tetraedr *t = new tetraedr;
	t->a = 2;
	t->d = 3;
	t->temperature = 4;
	shape *s3 = new tetraedr;
	s3 = t;
	c.cont[c.len] = s3;
	++c.len;

	c.OutParallelepiped(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerOutParallelepiped.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckOutTetraedr) {
	ofstream ofst("OutTest.txt");

	container c;

	ball *b = new ball;
	b->r = 2;
	b->d = 3;
	b->temperature = 4;
	shape *s1 = new ball;
	s1 = b;
	c.cont[c.len] = s1;
	++c.len;

	parallelepiped *p = new parallelepiped;
	p->a = 2;
	p->b = 2;
	p->c = 2;
	p->d = 3;
	p->temperature = 4;
	shape *s2 = new parallelepiped;
	s2 = p;
	c.cont[c.len] = s2;
	++c.len;

	tetraedr *t = new tetraedr;
	t->a = 2;
	t->d = 3;
	t->temperature = 4;
	shape *s3 = new tetraedr;
	s3 = t;
	c.cont[c.len] = s3;
	++c.len;

	c.OutTetraedr(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerOutTetraedr.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckSort) {
	ofstream ofst("OutTest.txt");

	container c;

	ball *b = new ball;
	b->r = 2;
	b->d = 3;
	b->temperature = 4;
	shape *s1 = new ball;
	s1 = b;
	c.cont[c.len] = s1;
	++c.len;

	parallelepiped *p = new parallelepiped;
	p->a = 22;
	p->b = 2;
	p->c = 2;
	p->d = 3;
	p->temperature = 4;
	shape *s2 = new parallelepiped;
	s2 = p;
	c.cont[c.len] = s2;
	++c.len;

	tetraedr *t = new tetraedr;
	t->a = 2;
	t->d = 3;
	t->temperature = 4;
	shape *s3 = new tetraedr;
	s3 = t;
	c.cont[c.len] = s3;
	++c.len;

	c.Sort();
	c.Out(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerSort.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckSortEmpty) {
	ofstream ofst("OutTest.txt");

	container c;

	c.Sort();
	c.Out(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerSortEmpty.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}

TEST_F(ContainerTest, CheckOut) {
	ofstream ofst("OutTest.txt");

	container c;

	ball *b = new ball;
	b->r = 2;
	b->d = 3;
	b->temperature = 4;
	shape *s1 = new ball;
	s1 = b;
	c.cont[c.len] = s1;
	++c.len;

	parallelepiped *p = new parallelepiped;
	p->a = 22;
	p->b = 2;
	p->c = 2;
	p->d = 3;
	p->temperature = 4;
	shape *s2 = new parallelepiped;
	s2 = p;
	c.cont[c.len] = s2;
	++c.len;

	tetraedr *t = new tetraedr;
	t->a = 2;
	t->d = 3;
	t->temperature = 4;
	shape *s3 = new tetraedr;
	s3 = t;
	c.cont[c.len] = s3;
	++c.len;

	c.Out(ofst);
	ofst.close();

	ifstream actual("OutTest.txt");
	ifstream expected("ContainerOut.txt");
	bool flag = FilesCmp(expected, actual);
	ASSERT_TRUE(flag);
}