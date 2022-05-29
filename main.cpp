#include<iostream>
#include <cstdio>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <stdlib.h>
using namespace std;

void circle(float x, float y, float radius, float height)
{
    int triangleAmount = 360;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for (int i = 0; i <= 360; i++)
        glVertex2f(x + (radius * cos(i * 2 * 3.1416 / triangleAmount)), y + (height * sin(i * 2 * 3.1416 / triangleAmount)));
    glEnd();
}

void mountain()
{
    //Rear mountain
    glBegin(GL_POLYGON);
    glColor3ub (84, 148, 55);
    glVertex2f(387, 500);
    glVertex2f(387, 760);
    glVertex2f(348, 765);
    glVertex2f(320, 774);
    glVertex2f(299, 789);
    glVertex2f(286, 781);
    glVertex2f(243, 807);
    glVertex2f(216, 788);
    glVertex2f(206, 788);
    glVertex2f(149, 766);
    glVertex2f(116, 735);
    glVertex2f(80, 735);
    glVertex2f(42, 721);
    glVertex2f(0, 712);
    glVertex2f(0, 500);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(690, 500);
    glVertex2f(690, 757);
    glVertex2f(709, 766);
    glVertex2f(728, 762);
    glVertex2f(745, 779);
    glVertex2f(774, 797);
    glVertex2f(787, 790);
    glVertex2f(808, 807);
    glVertex2f(863, 769);
    glVertex2f(876, 776);
    glVertex2f(901, 771);
    glVertex2f(916, 757);
    glVertex2f(945, 782);
    glVertex2f(1002,737);
    glVertex2f(1024,745);
    glVertex2f(1024, 745);
    glVertex2f(1084, 712);
    glVertex2f(1096, 718);
    glVertex2f(1125, 692);
    glVertex2f(1166, 675);
    glVertex2f(1195, 677);
    glVertex2f(1230, 688);
    glVertex2f(1267, 688);
    glVertex2f(1300, 715);
    glVertex2f(1357, 735);
    glVertex2f(1366, 734);
    glVertex2f(1393, 751);
    glVertex2f(1437, 729);
    glVertex2f(1450, 735);
    glVertex2f(1471, 722);
    glVertex2f(1498, 715);
    glVertex2f(1537, 710);
    glVertex2f(1537, 500);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1841, 500);
    glVertex2f(1841, 707);
    glVertex2f(1860, 715);
    glVertex2f(1879, 712);
    glVertex2f(1920, 736);
    glVertex2f(1920, 500);
    glEnd();

    //Rear mountain shadow light
    glBegin(GL_POLYGON);
    glColor3ub (130, 189, 87);
    glVertex2f(11, 678);
    glVertex2f(19, 706);
    glVertex2f(54, 710);
    glVertex2f(80, 730);
    glVertex2f(96, 730);
    glVertex2f(79, 693);
    glVertex2f(41, 693);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(171, 733);
    glVertex2f(181, 751);
    glVertex2f(204, 760);
    glVertex2f(222, 783);
    glVertex2f(241, 798);
    glVertex2f(235, 782);
    glVertex2f(216, 760);
    glVertex2f(209, 749);
    glVertex2f(190, 742);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(748, 750);
    glVertex2f(773, 766);
    glVertex2f(787, 783);
    glVertex2f(805, 792);
    glVertex2f(810, 803);
    glVertex2f(812, 786);
    glVertex2f(792, 775);
    glVertex2f(773, 753);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(799, 733);
    glVertex2f(824, 749);
    glVertex2f(829, 761);
    glVertex2f(818, 791);
    glVertex2f(839, 776);
    glVertex2f(847, 761);
    glVertex2f(844, 748);
    glVertex2f(823, 733);
    glVertex2f(810, 709);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(887, 726);
    glVertex2f(900, 739);
    glVertex2f(928, 745);
    glVertex2f(944, 773);
    glVertex2f(944, 754);
    glVertex2f(955, 735);
    glVertex2f(910, 725);
    glVertex2f(888, 708);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(953, 765);
    glVertex2f(978, 749);
    glVertex2f(996, 724);
    glVertex2f(978, 716);
    glVertex2f(962, 752);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1321, 686);
    glVertex2f(1331, 701);
    glVertex2f(1354, 709);
    glVertex2f(1371, 728);
    glVertex2f(1392, 743);
    glVertex2f(1386, 728);
    glVertex2f(1368, 711);
    glVertex2f(1359, 700);
    glVertex2f(1339, 695);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1404, 694);
    glVertex2f(1426, 721);
    glVertex2f(1449, 728);
    glVertex2f(1490, 704);
    glVertex2f(1455, 711);
    glVertex2f(1429, 704);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1872, 705);
    glVertex2f(1888, 709);
    glVertex2f(1894, 721);
    glVertex2f(1899, 724);
    glVertex2f(1914, 728);
    glVertex2f(1914, 718);
    glVertex2f(1894, 704);
    glEnd();

    ///-------------------------

    //Front mountain
    glBegin(GL_POLYGON);
    glColor3ub (92, 181, 47);
    glVertex2f(0, 500);
    glVertex2f(0, 600);
    glVertex2f(40, 590);
    glVertex2f(90, 700);
    glVertex2f(140, 695);
    glVertex2f(250, 500);
    glVertex2f(285, 800);
    glVertex2f(374, 737);
    glVertex2f(382, 757);
    glVertex2f(416, 781);
    glVertex2f(438, 806);
    glVertex2f(523, 872);
    glVertex2f(569, 823);
    glVertex2f(584, 829);
    glVertex2f(609, 804);
    glVertex2f(631, 810);
    glVertex2f(678, 774);
    glVertex2f(700, 743);
    glVertex2f(709, 751);
    glVertex2f(788, 724);
    glVertex2f(811, 701);
    glVertex2f(826, 711);
    glVertex2f(828, 710);
    glVertex2f(829, 711);
    glVertex2f(831, 709);
    glVertex2f(879, 698);
    glVertex2f(920, 686);
    glVertex2f(954, 674);
    glVertex2f(965, 668);
    glVertex2f(970, 664);
    glVertex2f(970, 662);
    glVertex2f(984, 650);
    glVertex2f(1155, 600);
    glVertex2f(1155, 600);
    glVertex2f(1166, 700);
    glVertex2f(1400, 600);
    glVertex2f(1400, 500);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1166, 500);
    glVertex2f(1166, 535);
    glVertex2f(1205, 550);
    glVertex2f(1238, 603);
    glVertex2f(1398, 667);
    glVertex2f(1436, 647);
    glVertex2f(1460, 671);
    glVertex2f(1525, 691);
    glVertex2f(1532, 708);
    glVertex2f(1568, 729);
    glVertex2f(1589, 750);
    glVertex2f(1674, 807);
    glVertex2f(1718, 764);
    glVertex2f(1734, 770);
    glVertex2f(1760, 747);
    glVertex2f(1782, 753);
    glVertex2f(1829, 722);
    glVertex2f(1850, 696);
    glVertex2f(1859, 702);
    glVertex2f(1920, 685);
    glVertex2f(1920, 500);
    glEnd();

    //Front mountain shadow light
    glBegin(GL_POLYGON);
    glColor3ub (147, 212, 99);
    glVertex2f(80, 590);
    glVertex2f(90, 690);
    glVertex2f(101, 670);
    glVertex2f(120, 687);
    glVertex2f(196, 600);
    glVertex2f(216, 672);
    glVertex2f(250, 700);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(248, 654);
    glVertex2f(295, 666);
    glVertex2f(304, 689);
    glVertex2f(334, 718);
    glVertex2f(315, 682);
    glVertex2f(326, 675);
    glVertex2f(297, 658);
    glVertex2f(280, 643);
    glVertex2f(271, 653);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(339, 697);
    glVertex2f(408, 746);
    glVertex2f(408, 766);
    glVertex2f(445, 799);
    glVertex2f(523, 863);
    glVertex2f(521, 828);
    glVertex2f(509, 818);
    glVertex2f(505, 795);
    glVertex2f(511, 789);
    glVertex2f(509, 781);
    glVertex2f(512, 764);
    glVertex2f(507, 749);
    glVertex2f(485, 722);
    glVertex2f(447, 696);
    glVertex2f(484, 742);
    glVertex2f(494, 766);
    glVertex2f(493, 780);
    glVertex2f(478, 767);
    glVertex2f(466, 774);
    glVertex2f(448, 753);
    glVertex2f(450, 783);
    glVertex2f(442, 776);
    glVertex2f(438, 749);
    glVertex2f(404, 727);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(693, 723);
    glVertex2f(709, 750);
    glVertex2f(714, 710);
    glVertex2f(674, 672);
    glVertex2f(617, 661);
    glVertex2f(673, 698);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(800, 693);
    glVertex2f(830, 710);
    glVertex2f(839, 697);
    glVertex2f(864, 687);
    glVertex2f(852, 665);
    glVertex2f(822, 665);
    glVertex2f(754, 628);
    glVertex2f(754, 629);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1366, 632);
    glVertex2f(1400, 658);
    glVertex2f(1265, 609);
    glVertex2f(1338, 621);
    glVertex2f(1347, 608);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1593, 724);
    glVertex2f(1601, 729);
    glVertex2f(1598, 703);
    glVertex2f(1617, 722);
    glVertex2f(1630, 717);
    glVertex2f(1644, 727);
    glVertex2f(1645, 715);
    glVertex2f(1635, 695);
    glVertex2f(1597, 654);
    glVertex2f(1636, 677);
    glVertex2f(1662, 706);
    glVertex2f(1662, 717);
    glVertex2f(1660, 728);
    glVertex2f(1662, 736);
    glVertex2f(1656, 741);
    glVertex2f(1659, 760);
    glVertex2f(1672, 769);
    glVertex2f(1673, 800);
    glVertex2f(1558, 714);
    glVertex2f(1558, 698);
    glVertex2f(1489, 656);
    glVertex2f(1553, 681);
    glVertex2f(1589, 701);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1824, 656);
    glVertex2f(1842, 675);
    glVertex2f(1860, 700);
    glVertex2f(1865, 666);
    glVertex2f(1823, 633);
    glVertex2f(1767, 624);
    glEnd();

    //Front mountain shadow dark
    glBegin(GL_POLYGON);
    glColor3ub(76, 154, 42);
    glVertex2f(546, 669);
    glVertex2f(527, 707);
    glVertex2f(531, 753);
    glVertex2f(553, 701);
    glVertex2f(581, 657);
    glVertex2f(643, 618);
    glVertex2f(676, 558);
    glVertex2f(609, 523);
    glVertex2f(514, 510);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(619, 773);
    glVertex2f(602, 804);
    glVertex2f(582, 825);
    glVertex2f(592, 797);
    glVertex2f(586, 756);
    glVertex2f(605, 711);
    glVertex2f(670, 708);
    glVertex2f(680, 736);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(936, 613);
    glVertex2f(922, 637);
    glVertex2f(920, 663);
    glVertex2f(868, 700);
    glVertex2f(923, 682);
    glVertex2f(961, 664);
    glVertex2f(1080, 577);
    glVertex2f(1048, 512);
    glVertex2f(916, 518);
    glVertex2f(896, 554);
    glVertex2f(1000, 539);
    glVertex2f(881, 616);
    glVertex2f(895, 635);
    glVertex2f(907, 621);
    glVertex2f(1100, 670);
    glVertex2f(1150, 600);
    glVertex2f(1200, 650);
    glVertex2f(1230, 550);
    glVertex2f(1150, 600);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(813, 531);
    glVertex2f(836, 572);
    glVertex2f(836, 603);
    glVertex2f(821, 640);
    glVertex2f(827, 660);
    glVertex2f(808, 632);
    glVertex2f(805, 586);
    glVertex2f(775, 552);
    glVertex2f(694, 517);
    glVertex2f(746, 540);
    glVertex2f(836, 520);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1611, 593);
    glVertex2f(1646, 644);
    glVertex2f(1646, 663);
    glVertex2f(1606, 632);
    glVertex2f(1556, 622);
    glVertex2f(1489, 590);
    glVertex2f(1455, 514);
    glVertex2f(1449, 554);
    glVertex2f(1700, 590);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1697, 631);
    glVertex2f(1677, 665);
    glVertex2f(1682, 705);
    glVertex2f(1705, 657);
    glVertex2f(1731, 621);
    glVertex2f(1796, 585);
    glVertex2f(1828, 534);
    glVertex2f(1759, 505);
    glVertex2f(1666, 583);
    glVertex2f(1692, 556);
    glVertex2f(1685, 593);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1742, 742);
    glVertex2f(1733, 765);
    glVertex2f(1753, 748);
    glVertex2f(1770, 721);
    glVertex2f(1832, 689);
    glVertex2f(1820, 665);
    glVertex2f(1754, 668);
    glVertex2f(1736, 708);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1901, 673);
    glVertex2f(1880, 687);
    glVertex2f(1914, 682);
    glVertex2f(1914, 633);
    glVertex2f(1910, 727);
    glVertex2f(1902, 602);
    glVertex2f(1902, 641);
    glVertex2f(1871, 598);
    glVertex2f(1867, 628);
    glVertex2f(1896, 655);
    glEnd();
}

void sky()
{
    //sky bottom
    glBegin(GL_QUADS);
    glColor3ub(250, 245, 217);
    glVertex2f(0, 660);
    glVertex2f(1920, 660);

    //sky top
    glColor3ub(95, 179, 232);
    glVertex2f(1920, 1080);
    glVertex2f(0, 1080);
    glEnd();
}

void ground()
{
    //far ground
    glBegin(GL_POLYGON);
    glColor3ub(91, 161, 56);
    glVertex2f(0, 500);
    glVertex2f(1920, 500);
    glVertex2f(1920, 400);
    glVertex2f(0, 400);
    glEnd();

    //near ground
    glBegin(GL_QUADS);
    glVertex2f(0,0);
    glVertex2f(1920,0);
    glVertex2f(1920,400);
    glVertex2f(0,400);
    glEnd();
}

void ground_marks()
{
    //ground marks
    glBegin(GL_POLYGON);
    glColor3ub(104, 186, 63);
    glVertex2f(299, 75);
    glVertex2f(299, 71);
    glVertex2f(390, 67);
    glVertex2f(340, 60);
    glVertex2f(300, 59);
    glVertex2f(227, 60);
    glVertex2f(235, 66);
    glVertex2f(221, 73);
    glVertex2f(188, 76);
    glVertex2f(189, 85);
    glVertex2f(302, 86);
    glVertex2f(413, 81);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(474, 10);
    glVertex2f(502, 1);
    glVertex2f(359, 1);
    glVertex2f(325, 6);
    glVertex2f(362, 9);
    glVertex2f(442, 14);
    glVertex2f(408, 17);
    glVertex2f(296, 21);
    glVertex2f(461, 31);
    glVertex2f(549, 28);
    glVertex2f(576, 24);
    glVertex2f(543, 17);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(807, 49);
    glVertex2f(828, 48);
    glVertex2f(863, 46);
    glVertex2f(886, 44);
    glVertex2f(859, 39);
    glVertex2f(835, 38);
    glVertex2f(805, 38);
    glVertex2f(763, 39);
    glVertex2f(782, 46);
    glVertex2f(750, 50);
    glVertex2f(730, 53);
    glVertex2f(713, 56);
    glVertex2f(730, 59);
    glVertex2f(777, 61);
    glVertex2f(809, 61);
    glVertex2f(892, 56);
    glVertex2f(909, 55);
    glVertex2f(886, 53);
    glVertex2f(829, 52);
    glVertex2f(813, 51);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1305, 125);
    glVertex2f(1372, 122);
    glVertex2f(1401, 118);
    glVertex2f(1339, 111);
    glVertex2f(1247, 113);
    glVertex2f(1275, 122);
    glVertex2f(1214, 129);
    glVertex2f(1186, 134);
    glVertex2f(1213, 138);
    glVertex2f(1293, 140);
    glVertex2f(1431, 133);
    glVertex2f(1396, 129);
    glVertex2f(1316, 127);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1272, 69);
    glVertex2f(1287, 64);
    glVertex2f(1302, 59);
    glVertex2f(1220, 56);
    glVertex2f(1157, 60);
    glVertex2f(1122, 65);
    glVertex2f(1161, 69);
    glVertex2f(1239, 73);
    glVertex2f(1226, 75);
    glVertex2f(1129, 78);
    glVertex2f(1093, 82);
    glVertex2f(1251, 90);
    glVertex2f(1341, 88);
    glVertex2f(1373, 83);
    glVertex2f(1314, 73);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(170, 470);
    glVertex2f(225, 470);
    glVertex2f(235, 435);
    glVertex2f(160, 434);
    glEnd();
}

void river()
{
    //river
    glBegin(GL_POLYGON);
    glColor3ub(154, 242, 255);
    glVertex2f(0, 430);
    glVertex2f(300, 420);
    glVertex2f(800, 450);
    glVertex2f(1300, 440);
    glVertex2f(1650, 437);
    glVertex2f(1920, 430);
    glVertex2f(1920, 250);
    glVertex2f(1500, 220);
    glVertex2f(300, 240);
    glVertex2f(0, 250);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(154, 242, 255);
    glVertex2f(1300, 400);
    glVertex2f(1400, 400);
    glVertex2f(1445, 500);
    glVertex2f(1451, 500);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(154, 242, 255);
    glVertex2f(1445, 500);
    glVertex2f(1451, 500);
    glVertex2f(1450, 550);
    glEnd();
}

void river_marks()
{
    //river marks
    glBegin(GL_POLYGON);
    glColor3ub(137, 227, 240);
    glVertex2f(376, 388);
    glVertex2f(419, 388);
    glVertex2f(576, 389);
    glVertex2f(556, 387);
    glVertex2f(535, 387);
    glVertex2f(324, 381);
    glVertex2f(312, 382);
    glVertex2f(305, 384);
    glVertex2f(302, 386);
    glVertex2f(303, 389);
    glVertex2f(372, 389);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(371, 356);
    glVertex2f(401, 355);
    glVertex2f(471, 358);
    glVertex2f(532, 357);
    glVertex2f(544, 355);
    glVertex2f(551, 354);
    glVertex2f(557, 349);
    glVertex2f(385, 345);
    glVertex2f(342, 344);
    glVertex2f(338, 344);
    glVertex2f(269, 344);
    glVertex2f(196, 347);
    glVertex2f(129, 351);
    glVertex2f(5, 351);
    glVertex2f(5, 356);
    glVertex2f(9, 357);
    glVertex2f(349, 360);
    glVertex2f(366, 359);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(722, 333);
    glVertex2f(738, 332);
    glVertex2f(801, 333);
    glVertex2f(864, 334);
    glVertex2f(891, 332);
    glVertex2f(904, 329);
    glVertex2f(907, 326);
    glVertex2f(765, 322);
    glVertex2f(613, 320);
    glVertex2f(552, 323);
    glVertex2f(464, 328);
    glVertex2f(346, 328);
    glVertex2f(346, 329);
    glVertex2f(359, 334);
    glVertex2f(606, 334);
    glVertex2f(649, 336);
    glVertex2f(717, 335);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(662, 383);
    glVertex2f(742, 383);
    glVertex2f(934, 383);
    glVertex2f(898, 381);
    glVertex2f(859, 380);
    glVertex2f(803, 378);
    glVertex2f(760, 377);
    glVertex2f(682, 375);
    glVertex2f(671, 376);
    glVertex2f(662, 378);
    glVertex2f(660, 381);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(830, 348);
    glVertex2f(960, 349);
    glVertex2f(1094, 345);
    glVertex2f(1067, 337);
    glVertex2f(933, 338);
    glVertex2f(869, 339);
    glVertex2f(847, 340);
    glVertex2f(835, 342);
    glVertex2f(829, 345);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1514, 356);
    glVertex2f(1685, 355);
    glVertex2f(1697, 351);
    glVertex2f(1698, 349);
    glVertex2f(1391, 344);
    glVertex2f(1262, 351);
    glVertex2f(1230, 351);
    glVertex2f(1219, 351);
    glVertex2f(1203, 351);
    glVertex2f(1154, 351);
    glVertex2f(1137, 352);
    glVertex2f(1137, 353);
    glVertex2f(1150, 357);
    glVertex2f(1509, 359);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1444, 389);
    glVertex2f(1717, 389);
    glVertex2f(1677, 387);
    glVertex2f(1594, 384);
    glVertex2f(1474, 381);
    glVertex2f(1457, 381);
    glVertex2f(1445, 384);
    glVertex2f(1443, 387);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1864, 333);
    glVertex2f(1915, 332);
    glVertex2f(1914, 322);
    glVertex2f(1748, 320);
    glVertex2f(1604, 328);
    glVertex2f(1553, 327);
    glVertex2f(1487, 328);
    glVertex2f(1500, 334);
    glVertex2f(1748, 334);
    glVertex2f(1824, 336);
    glVertex2f(1852, 337);
    glVertex2f(1860, 335);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1803, 383);
    glVertex2f(1801, 380);
    glVertex2f(1810, 376);
    glVertex2f(1827, 374);
    glVertex2f(1914, 377);
    glVertex2f(1914, 382);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(1187, 300);
    glVertex2f(1185, 298);
    glVertex2f(1187, 296);
    glVertex2f(1196, 293);
    glVertex2f(1208, 292);
    glVertex2f(1280, 294);
    glVertex2f(1460, 301);
    glEnd();

}

void house1(float Tx = 0, float Ty = 0, int m = 1)
{

    //House Wall Shadowed
    glBegin(GL_POLYGON);
    glColor3ub(245,137,39);
    glVertex2f(Tx + m * 0, Ty + m * 0);
    glVertex2f(Tx + m * 40, Ty + m * -0.01);
    glVertex2f(Tx + m * 40, Ty + m * 26);
    glVertex2f(Tx + m * 19, Ty + m * 48);
    glVertex2f(Tx + m * -0.04, Ty + m * 26);
    glEnd();

    //side wall
    glBegin(GL_QUADS);
    glColor3ub(254,191,62);
    glVertex2f(Tx + m * 40, Ty + m * -0.01);
    glVertex2f(Tx + m * 87, Ty + m * -0.01);
    glVertex2f(Tx + m * 87, Ty + m * 26);
    glVertex2f(Tx + m * 40, Ty + m * 26);

    //roof
    glBegin(GL_QUADS);
    glColor3ub(238,64,66);
    glVertex2f(Tx + m * 19, Ty + m * 48);
    glVertex2f(Tx + m * 40, Ty + m * 26);
    glVertex2f(Tx + m * 87, Ty + m * 26);
    glVertex2f(Tx + m * 67, Ty + m * 47);

    //door
    glBegin(GL_QUADS);
    glColor3ub(161,78,60);
    glVertex2f(Tx + m * 67, Ty + m * 0);
    glVertex2f(Tx + m * 60, Ty + m * 0);
    glVertex2f(Tx + m * 60, Ty + m * 20);
    glVertex2f(Tx + m * 67, Ty + m * 20);

    //windows
    glBegin(GL_QUADS);
    glColor3ub(5, 19, 26);
    glVertex2f(Tx + m * 6, Ty + m * 7);
    glVertex2f(Tx + m * 10, Ty + m * 7);
    glVertex2f(Tx + m * 10, Ty + m * 19);
    glVertex2f(Tx + m * 6, Ty + m * 19);
    glVertex2f(Tx + m * 17, Ty + m * 7);
    glVertex2f(Tx + m * 22, Ty + m * 7);
    glVertex2f(Tx + m * 22, Ty + m * 19);
    glVertex2f(Tx + m * 17, Ty + m * 19);
    glVertex2f(Tx + m * 29, Ty + m * 7);
    glVertex2f(Tx + m * 33, Ty + m * 7);
    glVertex2f(Tx + m * 33, Ty + m * 19);
    glVertex2f(Tx + m * 29, Ty + m * 19);
    glVertex2f(Tx + m * 46, Ty + m * 6);
    glVertex2f(Tx + m * 50, Ty + m * 6);
    glVertex2f(Tx + m * 50, Ty + m * 18);
    glVertex2f(Tx + m * 46, Ty + m * 18);

    glVertex2f(Tx + m * 76, Ty + m * 7);
    glVertex2f(Tx + m * 81, Ty + m * 7);
    glVertex2f(Tx + m * 81, Ty + m * 19);
    glVertex2f(Tx + m * 76, Ty + m * 19);
    glEnd();
}

void house2(float Tx = 0, float Ty = 0, int m = 1)
{
    //House Wall Shadowed
    glBegin(GL_POLYGON);
    glColor3ub(245,137,39);
    glVertex2f(Tx + m * 0, Ty + 0);
    glVertex2f(Tx + m * 40, Ty + 0);
    glVertex2f(Tx + m * 40, Ty + 26.27);
    glVertex2f(Tx + m * 20, Ty + 48);
    glVertex2f(Tx + m * -0.04, Ty + 26);
    glEnd();

    //Side Wall
    glBegin(GL_QUADS);
    glColor3ub(254,191,62);
    glVertex2f(Tx + m * 40, Ty + 0);
    glVertex2f(Tx + m * 141, Ty + 0);
    glVertex2f(Tx + m * 141, Ty + 26);
    glVertex2f(Tx + m * 40, Ty + 26);

    //roof
    glBegin(GL_QUADS);
    glColor3ub(238,64,66);
    glVertex2f(Tx + m * 20, Ty + 48);
    glVertex2f(Tx + m * 40, Ty + 26);
    glVertex2f(Tx + m * 141, Ty + 26);
    glVertex2f(Tx + m * 121, Ty + 48);

    //door
    glBegin(GL_QUADS);
    glColor3ub(161,78,60);
    glVertex2f(Tx + m * 95, Ty + m * 0);
    glVertex2f(Tx + m * 85, Ty + m * 0);
    glVertex2f(Tx + m * 85, Ty + m * 20);
    glVertex2f(Tx + m * 95, Ty + m * 20);

    //window
    glBegin(GL_QUADS);
    glColor3ub(5, 19, 26);
    glVertex2f(Tx + m * 7, Ty + 7);
    glVertex2f(Tx + m * 11, Ty + 7);
    glVertex2f(Tx + m * 11, Ty + 19);
    glVertex2f(Tx + m * 7, Ty + 19);
    glVertex2f(Tx + m * 18, Ty + 7);
    glVertex2f(Tx + m * 22, Ty + 7);
    glVertex2f(Tx + m * 22, Ty + 19);
    glVertex2f(Tx + m * 18, Ty + 19);
    glVertex2f(Tx + m * 29, Ty + 7);
    glVertex2f(Tx + m * 33, Ty + 7);
    glVertex2f(Tx + m * 33, Ty + 19);
    glVertex2f(Tx + m * 29, Ty + 19);
    glVertex2f(Tx + m * 46, Ty + 12);
    glVertex2f(Tx + m * 51, Ty + 12);
    glVertex2f(Tx + m * 51, Ty + 19);
    glVertex2f(Tx + m * 46, Ty + 19);
    glVertex2f(Tx + m * 60, Ty + 12);
    glVertex2f(Tx + m * 65, Ty + 12);
    glVertex2f(Tx + m * 65, Ty + 19);
    glVertex2f(Tx + m * 60, Ty + 19);
    glVertex2f(Tx + m * 74, Ty + 12);
    glVertex2f(Tx + m * 79, Ty + 12);
    glVertex2f(Tx + m * 79, Ty + 19);
    glVertex2f(Tx + m * 74, Ty + 19);
    glVertex2f(Tx + m * 102, Ty + 12);
    glVertex2f(Tx + m * 107, Ty + 12);
    glVertex2f(Tx + m * 107, Ty + 19);
    glVertex2f(Tx + m * 102, Ty + 19);
    glVertex2f(Tx + m * 116, Ty + 12);
    glVertex2f(Tx + m * 121, Ty + 12);
    glVertex2f(Tx + m * 121, Ty + 19);
    glVertex2f(Tx + m * 116, Ty + 19);
    glVertex2f(Tx + m * 130, Ty + 12);
    glVertex2f(Tx + m * 135, Ty + 12);
    glVertex2f(Tx + m * 135, Ty + 19);
    glVertex2f(Tx + m * 130, Ty + 19);
    glEnd();
}

void house3(float Tx = 0, float Ty = 0, float m = 1)
{
    //Wall Shadowed
    glBegin(GL_POLYGON);
    glColor3ub(245,137,39);
    glVertex2f(Tx + m * 0, Ty + m * 0);
    glVertex2f(Tx + m * 40, Ty + m * 0);
    glVertex2f(Tx + m * 40, Ty + m * 52);
    glVertex2f(Tx + m * 20, Ty + m * 74);
    glVertex2f(Tx + m * 0.26, Ty + m * 45);
    glEnd();

    //side wall
    glBegin(GL_QUADS);
    glColor3ub(254,191,62);
    glVertex2f(Tx + m * 40, Ty + m *0);
    glVertex2f(Tx + m * 101, Ty + m *0);
    glVertex2f(Tx + m * 101, Ty + m *45);
    glVertex2f(Tx + m * 40, Ty + m *45);

    //roof
    glBegin(GL_QUADS);
    glColor3ub(238,64,66);
    glVertex2f(Tx + m * 20, Ty + m *74);
    glVertex2f(Tx + m * 40, Ty + m *45);
    glVertex2f(Tx + m * 101, Ty + m *45);
    glVertex2f(Tx + m * 81, Ty + m *74);

    //windows
    glBegin(GL_QUADS);
    glColor3ub(5, 19, 26);
    glVertex2f(Tx + m * 13, Ty + m * 10);
    glVertex2f(Tx + m * 27, Ty + m * 10);
    glVertex2f(Tx + m * 27, Ty + m * 35);
    glVertex2f(Tx + m * 13, Ty + m * 35);

    glBegin(GL_QUADS);
    glColor3ub(5, 19, 26);
    glVertex2f(Tx + m * 45, Ty + m *13);
    glVertex2f(Tx + m * 55, Ty + m *13);
    glVertex2f(Tx + m * 55, Ty + m *27);
    glVertex2f(Tx + m * 45, Ty + m *27);
    glVertex2f(Tx + m * 85, Ty + m *13);
    glVertex2f(Tx + m * 95, Ty + m *13);
    glVertex2f(Tx + m * 95, Ty + m *27);
    glVertex2f(Tx + m * 85, Ty + m *27);

    //door
    glBegin(GL_QUADS);
    glColor3ub(161,78,60);
    glVertex2f(Tx + m * 80, Ty + m * 0);
    glVertex2f(Tx + m * 60, Ty + m * 0);
    glVertex2f(Tx + m * 60, Ty + m * 35);
    glVertex2f(Tx + m * 80, Ty + m * 35);

    //chimney left
    glBegin(GL_QUADS);
    glColor3ub(245,137,39);
    glVertex2f(Tx + m * 44, Ty + m *66);
    glVertex2f(Tx + m * 48, Ty + m *61);
    glVertex2f(Tx + m * 48, Ty + m *78);
    glVertex2f(Tx + m * 44, Ty + m *78);

    //chimney front
    glBegin(GL_QUADS);
    glColor3ub(254,191,62);
    glVertex2f(Tx + m * 48, Ty + m *61);
    glVertex2f(Tx + m * 55, Ty + m *61);
    glVertex2f(Tx + m * 55, Ty + m *78);
    glVertex2f(Tx + m * 48, Ty + m * 78);
    glEnd();
}

void handleResize(int w, int h)
{
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

int angle = 0;

void tower(float Tx = 0, float Ty = 0)
{
    //main body
    glBegin(GL_QUADS);
    glColor3ub(254,191,62);
    glVertex2f(Tx + 0, Ty + 0);
    glVertex2f(Tx + 56, Ty + 0);
    glVertex2f(Tx + 51, Ty + 70);
    glVertex2f(Tx + 4, Ty + 70);

    //throat
    glBegin(GL_QUADS);
    glColor3ub(125, 130, 100);
    glVertex2f(Tx + 7, Ty + 70);
    glVertex2f(Tx + 49, Ty + 70);
    glVertex2f(Tx + 49, Ty + 76);
    glVertex2f(Tx + 7, Ty + 76);

    //door
    glBegin(GL_QUADS);
    glColor3ub(161,78,60);
    glVertex2f(Tx + 22, Ty + 0);
    glVertex2f(Tx + 33, Ty + 0);
    glVertex2f(Tx + 33, Ty + 19);
    glVertex2f(Tx + 22, Ty + 19);

    //window
    glBegin(GL_QUADS);
    glColor3ub(5, 19, 26);
    glVertex2f(Tx + 25, Ty + 29);
    glVertex2f(Tx + 31, Ty + 29);
    glVertex2f(Tx + 31, Ty + 40);
    glVertex2f(Tx + 25, Ty + 40);
    glVertex2f(Tx + 25, Ty + 51);
    glVertex2f(Tx + 31, Ty + 51);
    glVertex2f(Tx + 31, Ty + 62);
    glVertex2f(Tx + 25, Ty + 62);
    glEnd();

    //roof
    glBegin(GL_TRIANGLES);
    glColor3ub(238,64,66);
    glVertex2f(Tx + 0, Ty + 76);
    glVertex2f(Tx + 57, Ty + 76);
    glVertex2f(Tx + 28, Ty + 91);
    glEnd();
}

void boat(float Tx = 0, float Ty = 0, float m = 1)
{
    //Boat mast
    glBegin(GL_POLYGON);
    glColor3ub(54, 39, 26);
    glVertex2f(Tx + m * 0, Ty + 15);
    glVertex2f(Tx + m * 128, Ty + 15);
    glVertex2f(Tx + m * 138, Ty + 20);
    glVertex2f(Tx + m * 138, Ty + 8);
    glVertex2f(Tx + m * 137, Ty + 6);
    glVertex2f(Tx + m * 137, Ty + 4);
    glVertex2f(Tx + m * 135, Ty + 2);
    glVertex2f(Tx + m * 134, Ty + 1);
    glVertex2f(Tx + m * 132, Ty + 1);
    glVertex2f(Tx + m * 129, Ty + 0);
    glVertex2f(Tx + m * 126, Ty + 0);
    glVertex2f(Tx + m * 4, Ty + 0);
    glVertex2f(Tx + m * 0, Ty + 15);
    glEnd();

    //Boat Sail
    glBegin(GL_TRIANGLES);
    glColor3ub(255, 255, 171);
    glVertex2f(Tx + m * 62, Ty + 121);
    glVertex2f(Tx + m * 2, Ty + 27);
    glVertex2f(Tx + m * 62, Ty + 27);

    //Boat Sail
    glColor3ub(255, 255, 122);
    glVertex2f(Tx + m * 63, Ty + 163);
    glVertex2f(Tx + m * 66, Ty + 14);
    glVertex2f(Tx + m * 121, Ty + 47);

    //Boat pole
    glColor3ub(10, 24, 32);
    glVertex2f(Tx + m * 63, Ty + 163);
    glVertex2f(Tx + m * 62, Ty + 13);
    glVertex2f(Tx + m * 66, Ty + 13);
    glEnd();
}

void tent(float Tx = 0, float Ty = 0, float m = 3)
{
    //Top
    glBegin(GL_POLYGON);
    glColor3ub (255, 196, 0);
    glVertex2f(Tx + m * 100, Ty + m * 110);
    glVertex2f(Tx + m * 160, Ty + m * 100);
    glVertex2f(Tx + m * 200, Ty + m * 170);
    glVertex2f(Tx + m * 135, Ty + m * 170);
    glEnd();

    //triangle
    glBegin(GL_POLYGON);
    glColor3ub (255, 216, 97);
    glVertex2f(Tx + m * 165, Ty + m * 99);
    glVertex2f(Tx + m * 220, Ty + m * 108);
    glVertex2f(Tx + m * 200, Ty + m * 170);
    glEnd();

    //Rope
    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 147, Ty + m * 175);
    glVertex2f(Tx + m * 104, Ty + m * 105);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 200, Ty + m * 175);
    glVertex2f(Tx + m * 150, Ty + m * 95);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 200, Ty + m * 170);
    glVertex2f(Tx + m * 200, Ty + m * 180);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 150, Ty + m * 90);
    glVertex2f(Tx + m * 150, Ty + m * 100);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 104, Ty + m * 100);
    glVertex2f(Tx + m * 104, Ty + m * 110);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 147, Ty + m * 170);
    glVertex2f(Tx + m * 147, Ty + m * 180);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 200, Ty + m * 175);
    glVertex2f(Tx + m * 235, Ty + m * 115);
    glEnd();

    glBegin(GL_LINE_LOOP);
    glColor3ub (0, 0, 0);
    glVertex2f(Tx + m * 235, Ty + m * 110);
    glVertex2f(Tx + m * 235, Ty + m * 120);
    glEnd();

    //Shade
    glBegin(GL_POLYGON);
    glColor3ub (237, 192, 52);
    glVertex2f(Tx + m * 169, Ty + m * 104);
    glVertex2f(Tx + m * 200, Ty + m * 150);
    glVertex2f(Tx + m * 200, Ty + m * 160);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (237, 192, 52);
    glVertex2f(Tx + m * 200, Ty + m * 170);
    glVertex2f(Tx + m * 200, Ty + m * 150);
    glVertex2f(Tx + m * 221, Ty + m * 107);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (128, 98, 0);
    glVertex2f(Tx + m * 220, Ty + m * 108);
    glVertex2f(Tx + m * 227, Ty + m * 108);
    glVertex2f(Tx + m * 206, Ty + m * 165);
    glVertex2f(Tx + m * 203, Ty + m * 160);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub (217, 169, 24);
    glVertex2f(Tx + m * 167, Ty + m * 99);
    glVertex2f(Tx + m * 227, Ty + m * 108);
    glVertex2f(Tx + m * 219, Ty + m * 112);
    glVertex2f(Tx + m * 169, Ty + m * 104);
    glEnd();



    //middle
    glBegin(GL_POLYGON);
    glColor3ub (255, 240, 194);
    glVertex2f(Tx + m * 200, Ty + m * 180);
    glVertex2f(Tx + m * 200, Ty + m * 110);
    glVertex2f(Tx + m * 201, Ty + m * 110);
    glVertex2f(Tx + m * 201, Ty + m * 110);
    glEnd();

    //Front
    glBegin(GL_POLYGON);
    glColor3ub (255, 196, 0);
    glVertex2f(Tx + m * 200, Ty + m * 170);
    glVertex2f(Tx + m * 160, Ty + m * 100);
    glVertex2f(Tx + m * 167, Ty + m * 99);
    glVertex2f(Tx + m * 206, Ty + m * 165);
    glEnd();
}

void tree(float Tx, float Ty, float m =1, float n=1.2)
{
    //tree
    glBegin(GL_QUADS);
    glColor3ub(110, 43, 23);
    glVertex2f(Tx+m*107, Ty+m*n*120);
    glVertex2f(Tx+m*123, Ty+m*n*120);
    glVertex2f(Tx+m*123, Ty+m*n*150);
    glVertex2f(Tx+m*107, Ty+m*n*150);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(23, 82, 38);
    glVertex2f(Tx+m*65, Ty+m*n*150);
    glVertex2f(Tx+m*165, Ty+m*n*150);
    glVertex2f(Tx+m*115, Ty+m*n*250);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(25,103,53);
    glVertex2f(Tx+m*75, Ty+m*n*190);
    glVertex2f(Tx+m*155, Ty+m*n*190);
    glVertex2f(Tx+m*115, Ty+m*n*255);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3ub(30, 143, 60);
    glVertex2f(Tx+m*90, Ty+m*n*230);
    glVertex2f(Tx+m*140, Ty+m*n*230);
    glVertex2f(Tx+m*115, Ty+m*n*275);
    glEnd();
}

void far_forest(float Tx=0, float Ty=0, float m=1)
{
    tree(Tx+15, Ty+25, 0.36*m);
    tree(Tx+-25, Ty+25, 0.4*m);
    tree(Tx+0, Ty+20, 0.3*m);
    tree(Tx+50, Ty+20, 0.35*m);
    tree(Tx+40, Ty+10, 0.3*m);
    tree(Tx+25, Ty+15, 0.22*m);
    tree(Tx+-60, Ty+30, 0.33*m);
    tree(Tx+-40, Ty+20, 0.3*m);
    tree(Tx+-20, Ty+15, 0.26*m);
    tree(Tx+-60, Ty+10, 0.28*m);
    tree(Tx+-35, Ty+7, 0.22*m);
    tree(Tx+0, Ty+10, 0.22*m);
    tree(Tx+65, Ty+4, 0.27*m);
}

void plane(float Tx, float Ty, float m=1)
{
    glBegin(GL_POLYGON);
    glColor3ub(57, 138, 179);
    glVertex2f(Tx + m * 24, Ty + 14);
    glVertex2f(Tx + m * 22, Ty + 20);
    glVertex2f(Tx + m * 26, Ty + 21);
    glVertex2f(Tx + m * 35, Ty + 15);
    glVertex2f(Tx + m * 52, Ty + 16);
    glVertex2f(Tx + m * 54, Ty + 16);
    glVertex2f(Tx + m * 55, Ty + 15);
    glVertex2f(Tx + m * 57, Ty + 14);
    glVertex2f(Tx + m * 59, Ty + 13);
    glVertex2f(Tx + m * 60, Ty + 10);
    glVertex2f(Tx + m * 60, Ty + 10);
    glVertex2f(Tx + m * 59, Ty + 10);
    glVertex2f(Tx + m * 36, Ty + 8);
    glVertex2f(Tx + m * 27, Ty + 0);
    glVertex2f(Tx + m * 23, Ty + 0);
    glVertex2f(Tx + m * 25, Ty + 7);
    glVertex2f(Tx + m * 10, Ty + 7);
    glVertex2f(Tx + m * 8, Ty + 8);
    glVertex2f(Tx + m * 6, Ty + 9);
    glVertex2f(Tx + m * 0, Ty + 17);
    glVertex2f(Tx + m * 4, Ty + 17);
    glVertex2f(Tx + m * 7, Ty + 15);
    glVertex2f(Tx + m * 8, Ty + 14);
    glVertex2f(Tx + m * 9, Ty + 13);
    glVertex2f(Tx + m * 13, Ty + 13);
    glEnd();
}

void cloud1(float Tx, float Ty, float m=1)
{
    //cloud
    circle(Tx + m * 16, Ty + m * 20, 15, 15);
    circle(Tx + m * 29, Ty + m * 31, 9, 9);
    circle(Tx + m * 58, Ty + m * 30, 27, 27);
    circle(Tx + m * 85, Ty + m * 21, 20, 20);

    glBegin(GL_QUADS);
    glColor3ub(255, 255, 255);
    glVertex2f(Tx+m*17, Ty+m*23);
    glVertex2f(Tx+m*85, Ty+m*23);
    glVertex2f(Tx+m*85, Ty+m*1);
    glVertex2f(Tx+m*17, Ty+m*5);
    glEnd();
}

void cloud2(float Tx, float Ty, float m=1)
{
    //cloud
    circle(Tx + m * 13, Ty + m * 16, 7, 7);
    circle(Tx + m * 24, Ty + m * 24, 9, 9);
    circle(Tx + m * 40, Ty + m * 32, 12, 12);
    circle(Tx + m * 54, Ty + m * 36, 7, 7);
    circle(Tx + m * 74, Ty + m * 40, 16, 16);
    circle(Tx + m * 95, Ty + m * 40, 10, 10);
    circle(Tx + m * 108, Ty + m * 34, 6, 6);
    circle(Tx + m * 122, Ty + m * 31, 10, 10);
    circle(Tx + m * 132, Ty + m * 25, 10, 10);
    circle(Tx + m * 144, Ty + m * 16, 6, 6);

    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(Tx+m*12, Ty+m*18);
    glVertex2f(Tx+m*146, Ty+m*18);
    glVertex2f(Tx+m*146, Ty+m*11);
    glVertex2f(Tx+m*11, Ty+m*10);
    glEnd();

    glBegin(GL_QUADS);
    glVertex2f(Tx+m*20, Ty+m*32);
    glVertex2f(Tx+m*138, Ty+m*32);
    glVertex2f(Tx+m*138, Ty+m*17);
    glVertex2f(Tx+m*20, Ty+m*17);
    glEnd();

}

void cloud3(float Tx, float Ty, float m=1)
{
    circle(Tx + m * 23, Ty + m * 33, 21, 21);
    circle(Tx + m * 50, Ty + m * 49, 20, 20);
    circle(Tx + m * 80, Ty + m * 43, 14, 14);
    circle(Tx + m * 90, Ty + m * 32, 17, 17);
    circle(Tx + m * 68, Ty + m * 23, 21, 21);
    circle(Tx + m * 43, Ty + m * 17, 17, 17);
    circle(Tx + m * 23, Ty + m * 33, 22, 22);
}

void wood(float Tx = 0, float Ty = 0)
{
    //Back wood
    glBegin(GL_POLYGON);
    glColor3ub(141,103,58);
    glVertex2f(Tx+606,Ty+50);
    glVertex2f(Tx+694,Ty+75);
    glVertex2f(Tx+700,Ty+74);
    glVertex2f(Tx+702,Ty+71);
    glVertex2f(Tx+704,Ty+65);
    glVertex2f(Tx+701,Ty+58);
    glVertex2f(Tx+608,Ty+29);
    glEnd();

    //Front wood
    glBegin(GL_POLYGON);
    glColor3ub(171,123,74);
    glVertex2f(Tx+700,Ty+50);
    glVertex2f(Tx+610,Ty+75);
    glVertex2f(Tx+606,Ty+75);
    glVertex2f(Tx+601,Ty+70);
    glVertex2f(Tx+601,Ty+63);
    glVertex2f(Tx+606,Ty+55);
    glVertex2f(Tx+694,Ty+29);
    glEnd();

    glColor3ub(141,103,58);
    circle(Tx+697,Ty+40,5,10);
    circle(Tx+607,Ty+40,5,10);
}

float _rain = 0.0f;
bool rainday = false;

void Rain(int value)
{

    if(rainday)
    {

        _rain += 0.01f;

        glBegin(GL_POINTS);
        for(int i=1; i<=1000; i++)
        {
            int x=rand();
            int y=rand();
            x%=1920;
            y%=1080;
            glBegin(GL_LINES);
            glColor3f(1.0, 1.0, 1.0);
            glVertex2d(x,y);
            glVertex2d(x+5,y+5);
            glEnd();
        }

        glutPostRedisplay();
        glutTimerFunc(5, Rain, 0);
        glFlush();
    }
}

void myKeyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'r':
        rainday = true;
        Rain(_rain);
        break;

    case 's':
        rainday = false;
        break;

    case 27:
        exit(0);
        break;

    default:
        break;
    }
}

GLint plane_position = 0;
GLint boat_position = 0;
GLint sun_position = 0;

GLint cloud1_position = 0;
GLint cloud2_position = 0;
GLint cloud3_position = 0;

void cloud1_motion(int value)
{
    if(cloud1_position < -2000)
        cloud1_position = 1920;

    cloud1_position -= 2;
    glutPostRedisplay();
    glutTimerFunc(30, cloud1_motion, 0);
}

void cloud2_motion(int value)
{
    if(cloud2_position > 2100)
        cloud2_position = -100;

    cloud2_position += 1;
    glutPostRedisplay();
    glutTimerFunc(30, cloud2_motion, 0);
}

void cloud3_motion(int value)
{
    if(cloud3_position < -2000)
        cloud3_position = 1920;

    cloud3_position -= 1;
    glutPostRedisplay();
    glutTimerFunc(30, cloud3_motion, 0);
}

void plane_motion(int value)
{
    if(plane_position > 2100)
        plane_position = -100;

    plane_position += 10;
    glutPostRedisplay();
    glutTimerFunc(30, plane_motion, 0);
}

void boat_motion(int value)
{
    if(boat_position > 2100)
        boat_position = -150;

    boat_position += 6;
    glutPostRedisplay();
    glutTimerFunc(30, boat_motion, 0);
}

void sun_motion(int value)
{
    if(sun_position > 100)
        sun_position = 100;

    sun_position += 1;
    glutPostRedisplay();
    glutTimerFunc(30, sun_motion, 0);
}

void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    sky();

    ///------------------------------
    glPushMatrix();
    glTranslatef(0.0f,sun_position, 0.0f);
    glColor3ub(255, 210, 48);
    circle(1190, 610, 70, 70);
    glPopMatrix();
    ///------------------------------

    ///------------------------------
    glPushMatrix();
    glTranslatef(cloud1_position, 0.0f, 0.0f);
    glColor3ub(255, 255, 255);
    cloud1(1920, 800);
    glPopMatrix();
    ///------------------------------

    ///------------------------------
    glPushMatrix();
    glTranslatef(cloud2_position, 0.0f, 0.0f);
    cloud2(0, 900);
    glPopMatrix();
    ///------------------------------

    ///------------------------------
    glPushMatrix();
    glTranslatef(cloud3_position, 0.0f, 0.0f);
    cloud3(1200, 1000);
    glPopMatrix();
    ///------------------------------

    ///------------------------------
    glPushMatrix();
    glTranslatef(plane_position,0.0f, 0.0f);
    plane(-100, 900);
    glPopMatrix();
    ///------------------------------

    mountain();
    ground();
    river();
    ground_marks();
    river_marks();

    tree(1065, 420, 0.4, 1);
    house3(1000, 465);
    tree(920, 420, 0.4, 1);
    tree(955, 410, 0.4, 1);
    house1(870, 465);
    house2(1150, 465);
    tree(1143, 415, 0.3, 1);
    tree(1270, 415, 0.45, 1);
    tree(1300, 415, 0.4, 1);
    tree(1330, 415, 0.45, 1);
    tree(1265, 420, 0.29, 1);
    tree(1100, 420, 0.29, 1);

    tower(170, 470);
    house2(550, 470);

    //Far Left
    far_forest(50, 400);
    far_forest(280, 410);
    far_forest(425, 415);
    far_forest(750, 420);

    //Far Right
    far_forest(1500, 405);
    far_forest(1645, 403);
    far_forest(1790, 401);
    far_forest(1935, 402);

    ///------------------------------
    glPushMatrix();
    glTranslatef(boat_position,0.0f, 0.0f);
    boat(-200, 330);
    glPopMatrix();
    ///------------------------------

    //Front Left
    tree(100,0,1.3);
    tree(-70,-40,1.4);
    tree(-70,-95,1);
    tree(10,-120,1.3);
    tree(90,-140,1.2);
    tree(30,-90,0.7);
    tree(230,00,0.7);

    //Front Right
    tree(1530, 0, 1.3, 1);
    tree(1620, -140, 1.5, 1.3);
    tree(1400, -50, 1.2);
    tree(1600, -100, 1, 1.2);
    tree(1700, -180, 1.3, 1.3);
    tree(1500, -90, 1.1, 1.2);
    tree(1450, -100, 1, 1);
    tree(1580, -80, 0.7, 1);

    wood(350, 40);

    tent(150, -170);
    glFlush ();
}

void myInit (void)
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 1920.0, 0.0, 1080.0);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (1920, 1080);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("");
    glutDisplayFunc(myDisplay);
    myInit();
    glutKeyboardFunc(myKeyboard);
    glutTimerFunc(1000, cloud1_motion, 0);
    glutTimerFunc(1000, cloud2_motion, 0);
    glutTimerFunc(1000, cloud3_motion, 0);
    glutTimerFunc(1000, boat_motion, 0);
    glutTimerFunc(1000, sun_motion, 0);
    glutTimerFunc(1000, plane_motion, 0);
    glutMainLoop();
}
