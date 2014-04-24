/*
Navicat MySQL Data Transfer

Source Server         : localhost
Source Server Version : 50616
Source Host           : localhost:3306
Source Database       : cs1d

Target Server Type    : MYSQL
Target Server Version : 50616
File Encoding         : 65001

Date: 2014-04-23 20:01:32
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for `cellprovider`
-- ----------------------------
DROP TABLE IF EXISTS `cellprovider`;
CREATE TABLE `cellprovider` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` text,
  `email` text,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=74 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of cellprovider
-- ----------------------------
INSERT INTO `cellprovider` VALUES ('1', '3 River Wireless', '@sms.3rivers.net');
INSERT INTO `cellprovider` VALUES ('2', 'ACS Wireless', '@paging.acswireless.com');
INSERT INTO `cellprovider` VALUES ('3', 'Alltel', '@message.alltel.com');
INSERT INTO `cellprovider` VALUES ('4', 'AT&T', '@txt.att.net');
INSERT INTO `cellprovider` VALUES ('5', 'Bell Canada', '@txt.bellmobility.ca');
INSERT INTO `cellprovider` VALUES ('6', 'Bell Canada', '@bellmobility.ca');
INSERT INTO `cellprovider` VALUES ('7', 'Bell Mobility (Canada)', '@txt.bell.ca');
INSERT INTO `cellprovider` VALUES ('8', 'Bell Mobility', '@txt.bellmobility.ca');
INSERT INTO `cellprovider` VALUES ('9', 'Blue Sky Frog', '@blueskyfrog.com');
INSERT INTO `cellprovider` VALUES ('10', 'Bluegrass Cellular', '@sms.bluecell.com');
INSERT INTO `cellprovider` VALUES ('11', 'Boost Mobile', '@myboostmobile.com');
INSERT INTO `cellprovider` VALUES ('12', 'BPL Mobile', '@bplmobile.com');
INSERT INTO `cellprovider` VALUES ('13', 'Carolina West Wireless', '10digit10digitnumber@cwwsms.com');
INSERT INTO `cellprovider` VALUES ('14', 'Cellular One', '@mobile.celloneusa.com');
INSERT INTO `cellprovider` VALUES ('15', 'Cellular South', '@csouth1.com');
INSERT INTO `cellprovider` VALUES ('16', 'Centennial Wireless', '@cwemail.com');
INSERT INTO `cellprovider` VALUES ('17', 'CenturyTel', '@messaging.centurytel.net');
INSERT INTO `cellprovider` VALUES ('18', 'Cingular (Now AT&T)', '@txt.att.net');
INSERT INTO `cellprovider` VALUES ('19', 'Clearnet', '@msg.clearnet.com');
INSERT INTO `cellprovider` VALUES ('20', 'Comcast', '@comcastpcs.textmsg.com');
INSERT INTO `cellprovider` VALUES ('21', 'Corr Wireless Communications', '@corrwireless.net');
INSERT INTO `cellprovider` VALUES ('22', 'Dobson', '@mobile.dobson.net');
INSERT INTO `cellprovider` VALUES ('23', 'Edge Wireless', '@sms.edgewireless.com');
INSERT INTO `cellprovider` VALUES ('24', 'Fido', '@fido.ca');
INSERT INTO `cellprovider` VALUES ('25', 'Golden Telecom', '@sms.goldentele.com');
INSERT INTO `cellprovider` VALUES ('26', 'Helio', '@messaging.sprintpcs.com');
INSERT INTO `cellprovider` VALUES ('27', 'Houston Cellular', '@text.houstoncellular.net');
INSERT INTO `cellprovider` VALUES ('28', 'Idea Cellular', '@ideacellular.net');
INSERT INTO `cellprovider` VALUES ('29', 'Illinois Valley Cellular', '@ivctext.com');
INSERT INTO `cellprovider` VALUES ('30', 'Inland Cellular Telephone', '@inlandlink.com');
INSERT INTO `cellprovider` VALUES ('31', 'MCI', '@pagemci.com');
INSERT INTO `cellprovider` VALUES ('32', 'Metrocall', '10digitpagernumber@page.metrocall.com');
INSERT INTO `cellprovider` VALUES ('33', 'Metrocall 2-way', '10digitpagernumber@my2way.com');
INSERT INTO `cellprovider` VALUES ('34', 'Metro PCS', '@mymetropcs.com');
INSERT INTO `cellprovider` VALUES ('35', 'Microcell', '@fido.ca');
INSERT INTO `cellprovider` VALUES ('36', 'Midwest Wireless', '@clearlydigital.com');
INSERT INTO `cellprovider` VALUES ('37', 'Mobilcomm', '@mobilecomm.net');
INSERT INTO `cellprovider` VALUES ('38', 'MTS', '@text.mtsmobility.com');
INSERT INTO `cellprovider` VALUES ('39', 'Nextel', '@messaging.nextel.com');
INSERT INTO `cellprovider` VALUES ('40', 'OnlineBeep', '@onlinebeep.net');
INSERT INTO `cellprovider` VALUES ('41', 'PCS One', '@pcsone.net');
INSERT INTO `cellprovider` VALUES ('42', 'President\'s Choice', '@txt.bell.ca');
INSERT INTO `cellprovider` VALUES ('43', 'Public Service Cellular', '@sms.pscel.com');
INSERT INTO `cellprovider` VALUES ('44', 'Qwest', '@qwestmp.com');
INSERT INTO `cellprovider` VALUES ('45', 'Rogers AT&T Wireless', '@pcs.rogers.com');
INSERT INTO `cellprovider` VALUES ('46', 'Rogers Canada', '@pcs.rogers.com');
INSERT INTO `cellprovider` VALUES ('47', 'Satellink', '10digitpagernumber.pageme@satellink.net');
INSERT INTO `cellprovider` VALUES ('48', 'Southwestern Bell', '@email.swbw.com');
INSERT INTO `cellprovider` VALUES ('49', 'Sprint', '@messaging.sprintpcs.com');
INSERT INTO `cellprovider` VALUES ('50', 'Sumcom', '@tms.suncom.com');
INSERT INTO `cellprovider` VALUES ('51', 'Surewest Communicaitons', '@mobile.surewest.com');
INSERT INTO `cellprovider` VALUES ('52', 'T-Mobile', '@tmomail.net');
INSERT INTO `cellprovider` VALUES ('53', 'Telus', '@msg.telus.com');
INSERT INTO `cellprovider` VALUES ('54', 'Tracfone', '@txt.att.net');
INSERT INTO `cellprovider` VALUES ('55', 'Triton', '@tms.suncom.com');
INSERT INTO `cellprovider` VALUES ('56', 'Unicel', '@utext.com');
INSERT INTO `cellprovider` VALUES ('57', 'US Cellular', '@email.uscc.net');
INSERT INTO `cellprovider` VALUES ('58', 'Solo Mobile', '@txt.bell.ca');
INSERT INTO `cellprovider` VALUES ('59', 'Sprint', '@messaging.sprintpcs.com');
INSERT INTO `cellprovider` VALUES ('60', 'Sumcom', '@tms.suncom.com');
INSERT INTO `cellprovider` VALUES ('61', 'Surewest Communicaitons', '@mobile.surewest.com');
INSERT INTO `cellprovider` VALUES ('62', 'T-Mobile', '@tmomail.net');
INSERT INTO `cellprovider` VALUES ('63', 'Telus', '@msg.telus.com');
INSERT INTO `cellprovider` VALUES ('64', 'Triton', '@tms.suncom.com');
INSERT INTO `cellprovider` VALUES ('65', 'Unicel', '@utext.com');
INSERT INTO `cellprovider` VALUES ('66', 'US Cellular', '@email.uscc.net');
INSERT INTO `cellprovider` VALUES ('67', 'US West', '@uswestdatamail.com');
INSERT INTO `cellprovider` VALUES ('68', 'Verizon', '@vtext.com');
INSERT INTO `cellprovider` VALUES ('69', 'Virgin Mobile', '@vmobl.com');
INSERT INTO `cellprovider` VALUES ('70', 'Virgin Mobile Canada', '@vmobile.ca');
INSERT INTO `cellprovider` VALUES ('71', 'West Central Wireless', '@sms.wcc.net');
INSERT INTO `cellprovider` VALUES ('72', 'Western Wireless', '@cellularonewest.com');
INSERT INTO `cellprovider` VALUES ('73', 'Can Cell', '@shawnCell');

-- ----------------------------
-- Table structure for `countrylist`
-- ----------------------------
DROP TABLE IF EXISTS `countrylist`;
CREATE TABLE `countrylist` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `countryName` text,
  `priority` int(11) DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=8 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of countrylist
-- ----------------------------
INSERT INTO `countrylist` VALUES ('1', 'United States Of America', '1');
INSERT INTO `countrylist` VALUES ('2', 'Canada', '0');
INSERT INTO `countrylist` VALUES ('3', 'Mexico', '0');
INSERT INTO `countrylist` VALUES ('4', 'Japan', '0');
INSERT INTO `countrylist` VALUES ('5', 'England', '0');
INSERT INTO `countrylist` VALUES ('6', 'China', '0');
INSERT INTO `countrylist` VALUES ('7', 'Australia', '0');

-- ----------------------------
-- Table structure for `stadiums`
-- ----------------------------
DROP TABLE IF EXISTS `stadiums`;
CREATE TABLE `stadiums` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `stadiumTeamName` text,
  `stadiumName` text,
  `address` text,
  `phoneNumber` text,
  `dateOpened` text,
  `population` text,
  `americanLeague` text,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=95 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of stadiums
-- ----------------------------
INSERT INTO `stadiums` VALUES ('66', 'Angels Stadium of Anaheim', 'Los Angeles Angels of Anaheim', '2000 E Gene Autry Way, Anaheim, CA 92806', '(714)940-2000', 'April 19, 1966', '45,483', 'true');
INSERT INTO `stadiums` VALUES ('67', 'Comerica Park', 'Detroit Tigers', '2100 Woodward Ave, Detroit, MI 48201', '(313) 962-4000', 'April 11, 2000', '41,681', 'true');
INSERT INTO `stadiums` VALUES ('68', 'Fenway Park', 'Boston Red Sox', '4 Yawkey Way, Boston, MA 02215', '(877) 733-7699', 'April 20, 1912', '37,499 (night) & 37,071 (day)', 'true');
INSERT INTO `stadiums` VALUES ('69', 'Globe Life Park in Arlington', 'Texas Rangers', '1000 Ballpark Way, Arlington, TX 76011', '(817) 273-5222', 'April 1, 1994', '48,114', 'true');
INSERT INTO `stadiums` VALUES ('70', 'Kauffman Stadium', 'Kansas City Royals', '1 Royal Way, Kansas City, MO 64129', '(816) 921-8000', 'April 10, 1973', '37,903', 'true');
INSERT INTO `stadiums` VALUES ('71', 'Minute Maid Park', 'Houston Astros', '501 Crawford St, Houston, TX 77002', '(713) 259-8000', 'March 30, 2000', '42,060', 'true');
INSERT INTO `stadiums` VALUES ('72', 'O.co Coliseum', 'Oakland Athletics', '7000 Coliseum Way, Oakland, CA 94621', '(510) 569-2121', 'September 18, 1966', '37,090 (April - August) & 55,945 (Sept - Jan)', 'true');
INSERT INTO `stadiums` VALUES ('73', 'Oriole Park at Camden Yards', 'Baltimore Orioles', '333 West Camden Street, Baltimore, MD 21201', '(410) 685-9800', 'April 6, 1992', '48,187', 'true');
INSERT INTO `stadiums` VALUES ('74', 'Progressive Field', 'Cleveland Indians', '2401 Ontario Street, Cleveland, OH 44115', '(216) 420-4487', 'April 2, 1994', '42,404', 'true');
INSERT INTO `stadiums` VALUES ('75', 'Rogers Centre', 'Toronto Blue Jays', '1 Blue Jays Way, Toronto, Ontario, Canada M5V1J3', '(416) 341-1000', 'June 3, 1989', '49,282', 'true');
INSERT INTO `stadiums` VALUES ('76', 'SafeCo Field', 'Seattle Mariners', '1516 First Avenue South, Seattle, WA 98134', '(206) 346-4000', 'July 15, 1999', '47,476', 'true');
INSERT INTO `stadiums` VALUES ('77', 'Target Field', 'Minnesota Twins', '353 N 5th St, Minneapolis, MN 55403', '(800) 338-9467', 'April 12, 2010', '39,021', 'true');
INSERT INTO `stadiums` VALUES ('78', 'Tropicana Field', 'Tampa Bay Rays', '1 Tropicana Dr, St. Petersburg, FL 33705', '(727) 825-3137', 'March 3, 1990', '31,042 (Regular Season) 42,735 (Postseason)', 'true');
INSERT INTO `stadiums` VALUES ('79', 'US Cellular Field', 'Chicago White Sox', '333 West 35th Street, Chicago, IL 60616', '(312) 674-1000', 'April 18, 1991', '40,615', 'true');
INSERT INTO `stadiums` VALUES ('80', 'Yankee Stadium', 'New York Yankees', '1 E 161st St, South Bronx, NY 10451', '(718) 293-4300', 'April 16, 2009', '50,291', 'true');
INSERT INTO `stadiums` VALUES ('81', 'AT&T Park', 'San Francisco Giants', '24 Willie Mays Plaza, San Francisco, CA 94107', '(415) 972-2000', 'April 11, 2000', '41,915', 'false');
INSERT INTO `stadiums` VALUES ('82', 'Busch Stadium', 'St. Louis Cardinals', '700 Clark Street, St. Louis, MO 63102', '(314) 345-9600', 'April 10, 2006', '46,861', 'false');
INSERT INTO `stadiums` VALUES ('83', 'Chase Field', 'Arizona Diamondbacks', '401 East Jefferson Street, Phoenix, AZ 85004', '(602) 462-6500', 'March 31, 1998', '48,633', 'false');
INSERT INTO `stadiums` VALUES ('84', 'Citi Field', 'New York Mets', '126th St. & Roosevelt Ave., Queens, NY 11368', '(718) 507-6387', 'April 13, 2009', '41,922', 'false');
INSERT INTO `stadiums` VALUES ('85', 'Citizens Bank Park', 'Philadelphia Phillies', '1 Citizens Bank Way, Philadelphia, PA 19148', '(215) 463-1000', 'April 3, 2004', '43,651', 'false');
INSERT INTO `stadiums` VALUES ('86', 'Coors Field', 'Colorado Rockies', '2001 Blake St, Denver, CO 80205', '(303) 292-0200', 'April 26, 1995', '50,480', 'false');
INSERT INTO `stadiums` VALUES ('87', 'Dodger Stadium', 'Los Angeles Dodgers', '1000 Elysian Park Avenue, Los Angeles, CA 90090', '(323) 224-1507', 'April 10, 1962', '56,000', 'false');
INSERT INTO `stadiums` VALUES ('88', 'Great America Ball Park', 'Cincinnati Reds', '100 Joe Nuxhall Way, Cincinnati, OH 45202', '(513) 381-7337', 'March 31, 2003', '42,319', 'false');
INSERT INTO `stadiums` VALUES ('89', 'Marlins Park', 'Miami Marlins', '501 Marlins Way, Miami, FL 33125', '(305)480-1300', 'April 4, 2012', '37,442', 'false');
INSERT INTO `stadiums` VALUES ('90', 'Miller Park', 'Milwaukee Brewers', '1 Brewers Way, Milwaukee, WI 53214', '(414) 902-4400', 'April 6, 2001', '41,900', 'false');
INSERT INTO `stadiums` VALUES ('91', 'Nationals Park', 'Washington Nationals', '1500 S Capitol St SE, Washington, DC 20003', '(202) 675-6287', 'March 30, 2008', '41,418', 'false');
INSERT INTO `stadiums` VALUES ('92', 'Petco Park', 'San Diego Padres', '19 Tony Gwynn Drive, San Diego, CA 92101', '(619) 795-5000', 'April 8, 2004', '42,524', 'false');
INSERT INTO `stadiums` VALUES ('93', 'PNC Park', 'Pittsburgh Pirates', '115 Federal St, Pittsburgh, PA 15212', '(412) 321-2827', 'March 31, 2001', '38,362', 'false');
INSERT INTO `stadiums` VALUES ('94', 'Turner Field', 'Atlanta Braves', '755 Hank Aaron Drive, Atlanta, GA 30315', '(404) 522-7630', 'March 29, 1997', '49,586', 'false');

-- ----------------------------
-- Table structure for `users`
-- ----------------------------
DROP TABLE IF EXISTS `users`;
CREATE TABLE `users` (
  `id` bigint(6) NOT NULL AUTO_INCREMENT,
  `firstName` varchar(255) NOT NULL,
  `lastName` varchar(255) NOT NULL,
  `username` varchar(254) DEFAULT NULL,
  `email` varchar(254) DEFAULT NULL,
  `password` varchar(36) DEFAULT NULL,
  `streetAddress` varchar(255) DEFAULT NULL,
  `city` varchar(255) DEFAULT NULL,
  `zipCode` int(5) DEFAULT NULL,
  `county` varchar(255) DEFAULT NULL,
  `state` varchar(255) DEFAULT NULL,
  `country` varchar(255) DEFAULT NULL,
  `cellPhone` varchar(255) DEFAULT NULL,
  `cellPhoneProvider` varchar(254) DEFAULT NULL,
  `dateCreated` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=4 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of users
-- ----------------------------
INSERT INTO `users` VALUES ('1', 'admin', 'admin', 'admin', 'admin@admin.com', '21232f297a57a5a743894a0e4a801fc3', '25 Lorem Ipsem', 'Lorem', '99999', 'Ipsem', 'LI', 'USA', '9999999999', 'att', '2014-04-23 18:11:36');
INSERT INTO `users` VALUES ('2', 'Shawn', 'Azar', 'cydia', 'cydiasa@gmail.com', '39b517d90fb2e4cacdb97f30ee15f13e', '2575 McCabe Way', 'Irvine', '92677', 'Orange', 'CA', 'USA', '9494442196', 'sprint', '2014-04-23 17:53:10');
INSERT INTO `users` VALUES ('3', 'Jerry', 'Lebowitz', 'jerry', 'jerry@lebowitz.com', 'dba8700ccbafad828b83b29aa87a9b4f', '25 Lorem Ipsem', 'Lorem', '99999', 'Ipsem', 'LI', 'USA', '9999999999', 'att', '2014-04-23 18:11:38');
INSERT INTO `users` VALUES ('4', 'Can', 'Dalgir', 'can', 'me@me.me', 'ab430bb8f2971825c7e8eec06802f26b', '255 Awesome Way', 'Awesome Town', '925614', 'Orange', 'ca', 'USA', '9494444444', 'att', '2014-04-23 17:49:33');
