/*
Navicat MySQL Data Transfer

Source Server         : localhost_3306
Source Server Version : 50616
Source Host           : localhost:3306
Source Database       : cs1d

Target Server Type    : MYSQL
Target Server Version : 50616
File Encoding         : 65001

Date: 2014-04-30 13:58:52
*/

SET FOREIGN_KEY_CHECKS=0;

-- ----------------------------
-- Table structure for cellprovider
-- ----------------------------
DROP TABLE IF EXISTS `cellprovider`;
CREATE TABLE `cellprovider` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `name` text,
  `email` text,
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=73 DEFAULT CHARSET=latin1;

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
INSERT INTO `cellprovider` VALUES ('13', 'Carolina West Wireless', '@cwwsms.com');
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
INSERT INTO `cellprovider` VALUES ('32', 'Metrocall', '@page.metrocall.com');
INSERT INTO `cellprovider` VALUES ('33', 'Metrocall 2-way', '@my2way.com');
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
INSERT INTO `cellprovider` VALUES ('47', 'Satellink', '@satellink.net');
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

-- ----------------------------
-- Table structure for countrylist
-- ----------------------------
DROP TABLE IF EXISTS `countrylist`;
CREATE TABLE `countrylist` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `countryName` text,
  `priority` int(11) DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=204 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of countrylist
-- ----------------------------
INSERT INTO `countrylist` VALUES ('1', 'United States Of America', '1');
INSERT INTO `countrylist` VALUES ('8', 'Afghanistan', '0');
INSERT INTO `countrylist` VALUES ('9', 'Albania', '0');
INSERT INTO `countrylist` VALUES ('10', 'Algeria', '0');
INSERT INTO `countrylist` VALUES ('11', 'Andorra', '0');
INSERT INTO `countrylist` VALUES ('12', 'Angola', '0');
INSERT INTO `countrylist` VALUES ('13', 'Antigua & Deps', '0');
INSERT INTO `countrylist` VALUES ('14', 'Argentina', '0');
INSERT INTO `countrylist` VALUES ('15', 'Armenia', '0');
INSERT INTO `countrylist` VALUES ('16', 'Australia', '0');
INSERT INTO `countrylist` VALUES ('17', 'Austria', '0');
INSERT INTO `countrylist` VALUES ('18', 'Azerbaijan', '0');
INSERT INTO `countrylist` VALUES ('19', 'Bahamas', '0');
INSERT INTO `countrylist` VALUES ('20', 'Bahrain', '0');
INSERT INTO `countrylist` VALUES ('21', 'Bangladesh', '0');
INSERT INTO `countrylist` VALUES ('22', 'Barbados', '0');
INSERT INTO `countrylist` VALUES ('23', 'Belarus', '0');
INSERT INTO `countrylist` VALUES ('24', 'Belgium', '0');
INSERT INTO `countrylist` VALUES ('25', 'Belize', '0');
INSERT INTO `countrylist` VALUES ('26', 'Benin', '0');
INSERT INTO `countrylist` VALUES ('27', 'Bhutan', '0');
INSERT INTO `countrylist` VALUES ('28', 'Bolivia', '0');
INSERT INTO `countrylist` VALUES ('29', 'Bosnia Herzegovina', '0');
INSERT INTO `countrylist` VALUES ('30', 'Botswana', '0');
INSERT INTO `countrylist` VALUES ('31', 'Brazil', '0');
INSERT INTO `countrylist` VALUES ('32', 'Brunei', '0');
INSERT INTO `countrylist` VALUES ('33', 'Bulgaria', '0');
INSERT INTO `countrylist` VALUES ('34', 'Burkina', '0');
INSERT INTO `countrylist` VALUES ('35', 'Burundi', '0');
INSERT INTO `countrylist` VALUES ('36', 'Cambodia', '0');
INSERT INTO `countrylist` VALUES ('37', 'Cameroon', '0');
INSERT INTO `countrylist` VALUES ('38', 'Canada', '0');
INSERT INTO `countrylist` VALUES ('39', 'Cape Verde', '0');
INSERT INTO `countrylist` VALUES ('40', 'Central African Rep', '0');
INSERT INTO `countrylist` VALUES ('41', 'Chad', '0');
INSERT INTO `countrylist` VALUES ('42', 'Chile', '0');
INSERT INTO `countrylist` VALUES ('43', 'China', '0');
INSERT INTO `countrylist` VALUES ('44', 'Colombia', '0');
INSERT INTO `countrylist` VALUES ('45', 'Comoros', '0');
INSERT INTO `countrylist` VALUES ('46', 'Congo', '0');
INSERT INTO `countrylist` VALUES ('47', 'Congo (Democratic Rep)', '0');
INSERT INTO `countrylist` VALUES ('48', 'Costa Rica', '0');
INSERT INTO `countrylist` VALUES ('49', 'Croatia', '0');
INSERT INTO `countrylist` VALUES ('50', 'Cuba', '0');
INSERT INTO `countrylist` VALUES ('51', 'Cyprus', '0');
INSERT INTO `countrylist` VALUES ('52', 'Czech Republic', '0');
INSERT INTO `countrylist` VALUES ('53', 'Denmark', '0');
INSERT INTO `countrylist` VALUES ('54', 'Djibouti', '0');
INSERT INTO `countrylist` VALUES ('55', 'Dominica', '0');
INSERT INTO `countrylist` VALUES ('56', 'Dominican Republic', '0');
INSERT INTO `countrylist` VALUES ('57', 'East Timor', '0');
INSERT INTO `countrylist` VALUES ('58', 'Ecuador', '0');
INSERT INTO `countrylist` VALUES ('59', 'Egypt', '0');
INSERT INTO `countrylist` VALUES ('60', 'El Salvador', '0');
INSERT INTO `countrylist` VALUES ('61', 'Equatorial Guinea', '0');
INSERT INTO `countrylist` VALUES ('62', 'Eritrea', '0');
INSERT INTO `countrylist` VALUES ('63', 'Estonia', '0');
INSERT INTO `countrylist` VALUES ('64', 'Ethiopia', '0');
INSERT INTO `countrylist` VALUES ('65', 'Fiji', '0');
INSERT INTO `countrylist` VALUES ('66', 'Finland', '0');
INSERT INTO `countrylist` VALUES ('67', 'France', '0');
INSERT INTO `countrylist` VALUES ('68', 'Gabon', '0');
INSERT INTO `countrylist` VALUES ('69', 'Gambia', '0');
INSERT INTO `countrylist` VALUES ('70', 'Georgia', '0');
INSERT INTO `countrylist` VALUES ('71', 'Germany', '0');
INSERT INTO `countrylist` VALUES ('72', 'Ghana', '0');
INSERT INTO `countrylist` VALUES ('73', 'Greece', '0');
INSERT INTO `countrylist` VALUES ('74', 'Grenada', '0');
INSERT INTO `countrylist` VALUES ('75', 'Guatemala', '0');
INSERT INTO `countrylist` VALUES ('76', 'Guinea', '0');
INSERT INTO `countrylist` VALUES ('77', 'Guinea-Bissau', '0');
INSERT INTO `countrylist` VALUES ('78', 'Guyana', '0');
INSERT INTO `countrylist` VALUES ('79', 'Haiti', '0');
INSERT INTO `countrylist` VALUES ('80', 'Honduras', '0');
INSERT INTO `countrylist` VALUES ('81', 'Hungary', '0');
INSERT INTO `countrylist` VALUES ('82', 'Iceland', '0');
INSERT INTO `countrylist` VALUES ('83', 'India', '0');
INSERT INTO `countrylist` VALUES ('84', 'Indonesia', '0');
INSERT INTO `countrylist` VALUES ('85', 'Iran', '0');
INSERT INTO `countrylist` VALUES ('86', 'Iraq', '0');
INSERT INTO `countrylist` VALUES ('87', 'Ireland (Republic)', '0');
INSERT INTO `countrylist` VALUES ('88', 'Israel', '0');
INSERT INTO `countrylist` VALUES ('89', 'Italy', '0');
INSERT INTO `countrylist` VALUES ('90', 'Ivory Coast', '0');
INSERT INTO `countrylist` VALUES ('91', 'Jamaica', '0');
INSERT INTO `countrylist` VALUES ('92', 'Japan', '0');
INSERT INTO `countrylist` VALUES ('93', 'Jordan', '0');
INSERT INTO `countrylist` VALUES ('94', 'Kazakhstan', '0');
INSERT INTO `countrylist` VALUES ('95', 'Kenya', '0');
INSERT INTO `countrylist` VALUES ('96', 'Kiribati', '0');
INSERT INTO `countrylist` VALUES ('97', 'Korea North', '0');
INSERT INTO `countrylist` VALUES ('98', 'Korea South', '0');
INSERT INTO `countrylist` VALUES ('99', 'Kosovo', '0');
INSERT INTO `countrylist` VALUES ('100', 'Kuwait', '0');
INSERT INTO `countrylist` VALUES ('101', 'Kyrgyzstan', '0');
INSERT INTO `countrylist` VALUES ('102', 'Laos', '0');
INSERT INTO `countrylist` VALUES ('103', 'Latvia', '0');
INSERT INTO `countrylist` VALUES ('104', 'Lebanon', '0');
INSERT INTO `countrylist` VALUES ('105', 'Lesotho', '0');
INSERT INTO `countrylist` VALUES ('106', 'Liberia', '0');
INSERT INTO `countrylist` VALUES ('107', 'Libya', '0');
INSERT INTO `countrylist` VALUES ('108', 'Liechtenstein', '0');
INSERT INTO `countrylist` VALUES ('109', 'Lithuania', '0');
INSERT INTO `countrylist` VALUES ('110', 'Luxembourg', '0');
INSERT INTO `countrylist` VALUES ('111', 'Macedonia', '0');
INSERT INTO `countrylist` VALUES ('112', 'Madagascar', '0');
INSERT INTO `countrylist` VALUES ('113', 'Malawi', '0');
INSERT INTO `countrylist` VALUES ('114', 'Malaysia', '0');
INSERT INTO `countrylist` VALUES ('115', 'Maldives', '0');
INSERT INTO `countrylist` VALUES ('116', 'Mali', '0');
INSERT INTO `countrylist` VALUES ('117', 'Malta', '0');
INSERT INTO `countrylist` VALUES ('118', 'Marshall Islands', '0');
INSERT INTO `countrylist` VALUES ('119', 'Mauritania', '0');
INSERT INTO `countrylist` VALUES ('120', 'Mauritius', '0');
INSERT INTO `countrylist` VALUES ('121', 'Mexico', '0');
INSERT INTO `countrylist` VALUES ('122', 'Micronesia', '0');
INSERT INTO `countrylist` VALUES ('123', 'Moldova', '0');
INSERT INTO `countrylist` VALUES ('124', 'Monaco', '0');
INSERT INTO `countrylist` VALUES ('125', 'Mongolia', '0');
INSERT INTO `countrylist` VALUES ('126', 'Montenegro', '0');
INSERT INTO `countrylist` VALUES ('127', 'Morocco', '0');
INSERT INTO `countrylist` VALUES ('128', 'Mozambique', '0');
INSERT INTO `countrylist` VALUES ('129', 'Myanmar, (Burma)', '0');
INSERT INTO `countrylist` VALUES ('130', 'Namibia', '0');
INSERT INTO `countrylist` VALUES ('131', 'Nauru', '0');
INSERT INTO `countrylist` VALUES ('132', 'Nepal', '0');
INSERT INTO `countrylist` VALUES ('133', 'Netherlands', '0');
INSERT INTO `countrylist` VALUES ('134', 'New Zealand', '0');
INSERT INTO `countrylist` VALUES ('135', 'Nicaragua', '0');
INSERT INTO `countrylist` VALUES ('136', 'Niger', '0');
INSERT INTO `countrylist` VALUES ('137', 'Nigeria', '0');
INSERT INTO `countrylist` VALUES ('138', 'Norway', '0');
INSERT INTO `countrylist` VALUES ('139', 'Oman', '0');
INSERT INTO `countrylist` VALUES ('140', 'Pakistan', '0');
INSERT INTO `countrylist` VALUES ('141', 'Palau', '0');
INSERT INTO `countrylist` VALUES ('142', 'Panama', '0');
INSERT INTO `countrylist` VALUES ('143', 'Papua New Guinea', '0');
INSERT INTO `countrylist` VALUES ('144', 'Paraguay', '0');
INSERT INTO `countrylist` VALUES ('145', 'Peru', '0');
INSERT INTO `countrylist` VALUES ('146', 'Philippines', '0');
INSERT INTO `countrylist` VALUES ('147', 'Poland', '0');
INSERT INTO `countrylist` VALUES ('148', 'Portugal', '0');
INSERT INTO `countrylist` VALUES ('149', 'Qatar', '0');
INSERT INTO `countrylist` VALUES ('150', 'Romania', '0');
INSERT INTO `countrylist` VALUES ('151', 'Russian Federation', '0');
INSERT INTO `countrylist` VALUES ('152', 'Rwanda', '0');
INSERT INTO `countrylist` VALUES ('153', 'St Kitts & Nevis', '0');
INSERT INTO `countrylist` VALUES ('154', 'St Lucia', '0');
INSERT INTO `countrylist` VALUES ('155', 'Saint Vincent & the Grenadines', '0');
INSERT INTO `countrylist` VALUES ('156', 'Samoa', '0');
INSERT INTO `countrylist` VALUES ('157', 'San Marino', '0');
INSERT INTO `countrylist` VALUES ('158', 'Sao Tome & Principe', '0');
INSERT INTO `countrylist` VALUES ('159', 'Saudi Arabia', '0');
INSERT INTO `countrylist` VALUES ('160', 'Senegal', '0');
INSERT INTO `countrylist` VALUES ('161', 'Serbia', '0');
INSERT INTO `countrylist` VALUES ('162', 'Seychelles', '0');
INSERT INTO `countrylist` VALUES ('163', 'Sierra Leone', '0');
INSERT INTO `countrylist` VALUES ('164', 'Singapore', '0');
INSERT INTO `countrylist` VALUES ('165', 'Slovakia', '0');
INSERT INTO `countrylist` VALUES ('166', 'Slovenia', '0');
INSERT INTO `countrylist` VALUES ('167', 'Solomon Islands', '0');
INSERT INTO `countrylist` VALUES ('168', 'Somalia', '0');
INSERT INTO `countrylist` VALUES ('169', 'South Africa', '0');
INSERT INTO `countrylist` VALUES ('170', 'South Sudan', '0');
INSERT INTO `countrylist` VALUES ('171', 'Spain', '0');
INSERT INTO `countrylist` VALUES ('172', 'Sri Lanka', '0');
INSERT INTO `countrylist` VALUES ('173', 'Sudan', '0');
INSERT INTO `countrylist` VALUES ('174', 'Suriname', '0');
INSERT INTO `countrylist` VALUES ('175', 'Swaziland', '0');
INSERT INTO `countrylist` VALUES ('176', 'Sweden', '0');
INSERT INTO `countrylist` VALUES ('177', 'Switzerland', '0');
INSERT INTO `countrylist` VALUES ('178', 'Syria', '0');
INSERT INTO `countrylist` VALUES ('179', 'Taiwan', '0');
INSERT INTO `countrylist` VALUES ('180', 'Tajikistan', '0');
INSERT INTO `countrylist` VALUES ('181', 'Tanzania', '0');
INSERT INTO `countrylist` VALUES ('182', 'Thailand', '0');
INSERT INTO `countrylist` VALUES ('183', 'Togo', '0');
INSERT INTO `countrylist` VALUES ('184', 'Tonga', '0');
INSERT INTO `countrylist` VALUES ('185', 'Trinidad & Tobago', '0');
INSERT INTO `countrylist` VALUES ('186', 'Tunisia', '0');
INSERT INTO `countrylist` VALUES ('187', 'Turkey', '0');
INSERT INTO `countrylist` VALUES ('188', 'Turkmenistan', '0');
INSERT INTO `countrylist` VALUES ('189', 'Tuvalu', '0');
INSERT INTO `countrylist` VALUES ('190', 'Uganda', '0');
INSERT INTO `countrylist` VALUES ('191', 'Ukraine', '0');
INSERT INTO `countrylist` VALUES ('192', 'United Arab Emirates', '0');
INSERT INTO `countrylist` VALUES ('193', 'United Kingdom', '0');
INSERT INTO `countrylist` VALUES ('195', 'Uruguay', '0');
INSERT INTO `countrylist` VALUES ('196', 'Uzbekistan', '0');
INSERT INTO `countrylist` VALUES ('197', 'Vanuatu', '0');
INSERT INTO `countrylist` VALUES ('198', 'Vatican City', '0');
INSERT INTO `countrylist` VALUES ('199', 'Venezuela', '0');
INSERT INTO `countrylist` VALUES ('200', 'Vietnam', '0');
INSERT INTO `countrylist` VALUES ('201', 'Yemen', '0');
INSERT INTO `countrylist` VALUES ('202', 'Zambia', '0');
INSERT INTO `countrylist` VALUES ('203', 'Zimbabwe', '0');

-- ----------------------------
-- Table structure for stadiums
-- ----------------------------
DROP TABLE IF EXISTS `stadiums`;
CREATE TABLE `stadiums` (
  `id` int(11) NOT NULL AUTO_INCREMENT,
  `stadiumName` text,
  `stadiumTeamName` text,
  `address` text,
  `phoneNumber` text,
  `dateOpened` text,
  `population` text,
  `americanLeague` tinyint(1) unsigned DEFAULT '0',
  `grass` tinyint(1) unsigned DEFAULT '1',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=98 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of stadiums
-- ----------------------------
INSERT INTO `stadiums` VALUES ('66', 'Angels Stadium of Anaheim', 'Los Angeles Angels of Anaheim', '2000 E Gene Autry Way, Anaheim, CA 92806', '(714)940-2000', 'April 19, 1966', '45,483', '1', '1');
INSERT INTO `stadiums` VALUES ('67', 'Comerica Park', 'Detroit Tigers', '2100 Woodward Ave, Detroit, MI 48201', '(313) 962-4000', 'April 11, 2000', '41,681', '1', '1');
INSERT INTO `stadiums` VALUES ('68', 'Fenway Park', 'Boston Red Sox', '4 Yawkey Way, Boston, MA 02215', '(877) 733-7699', 'April 20, 1912', '37,499 (night) & 37,071 (day)', '1', '1');
INSERT INTO `stadiums` VALUES ('69', 'Globe Life Park in Arlington', 'Texas Rangers', '1000 Ballpark Way, Arlington, TX 76011', '(817) 273-5222', 'April 1, 1994', '48,114', '1', '1');
INSERT INTO `stadiums` VALUES ('70', 'Kauffman Stadium', 'Kansas City Royals', '1 Royal Way, Kansas City, MO 64129', '(816) 921-8000', 'April 10, 1973', '37,903', '1', '1');
INSERT INTO `stadiums` VALUES ('71', 'Minute Maid Park', 'Houston Astros', '501 Crawford St, Houston, TX 77002', '(713) 259-8000', 'March 30, 2000', '42,060', '1', '1');
INSERT INTO `stadiums` VALUES ('72', 'O.co Coliseum', 'Oakland Athletics', '7000 Coliseum Way, Oakland, CA 94621', '(510) 569-2121', 'September 18, 1966', '37,090 (April - August) & 55,945 (Sept - Jan)', '1', '1');
INSERT INTO `stadiums` VALUES ('73', 'Oriole Park at Camden Yards', 'Baltimore Orioles', '333 West Camden Street, Baltimore, MD 21201', '(410) 685-9800', 'April 6, 1992', '48,187', '1', '1');
INSERT INTO `stadiums` VALUES ('74', 'Progressive Field', 'Cleveland Indians', '2401 Ontario Street, Cleveland, OH 44115', '(216) 420-4487', 'April 2, 1994', '42,404', '1', '1');
INSERT INTO `stadiums` VALUES ('75', 'Rogers Centre', 'Toronto Blue Jays', '1 Blue Jays Way, Toronto, Ontario, Canada M5V1J3', '(416) 341-1000', 'June 3, 1989', '49,282', '1', '0');
INSERT INTO `stadiums` VALUES ('76', 'SafeCo Field', 'Seattle Mariners', '1516 First Avenue South, Seattle, WA 98134', '(206) 346-4000', 'July 15, 1999', '47,476', '1', '1');
INSERT INTO `stadiums` VALUES ('77', 'Target Field', 'Minnesota Twins', '353 N 5th St, Minneapolis, MN 55403', '(800) 338-9467', 'April 12, 2010', '39,021', '1', '1');
INSERT INTO `stadiums` VALUES ('78', 'Tropicana Field', 'Tampa Bay Rays', '1 Tropicana Dr, St. Petersburg, FL 33705', '(727) 825-3137', 'March 3, 1990', '31,042 (Regular Season) 42,735 (Postseason)', '1', '0');
INSERT INTO `stadiums` VALUES ('79', 'US Cellular Field', 'Chicago White Sox', '333 West 35th Street, Chicago, IL 60616', '(312) 674-1000', 'April 18, 1991', '40,615', '1', '1');
INSERT INTO `stadiums` VALUES ('80', 'Yankee Stadium', 'New York Yankees', '1 E 161st St, South Bronx, NY 10451', '(718) 293-4300', 'April 16, 2009', '50,291', '1', '1');
INSERT INTO `stadiums` VALUES ('81', 'AT&T Park', 'San Francisco Giants', '24 Willie Mays Plaza, San Francisco, CA 94107', '(415) 972-2000', 'April 11, 2000', '41,915', '0', '1');
INSERT INTO `stadiums` VALUES ('82', 'Busch Stadium', 'St. Louis Cardinals', '700 Clark Street, St. Louis, MO 63102', '(314) 345-9600', 'April 10, 2006', '46,861', '0', '1');
INSERT INTO `stadiums` VALUES ('83', 'Chase Field', 'Arizona Diamondbacks', '401 East Jefferson Street, Phoenix, AZ 85004', '(602) 462-6500', 'March 31, 1998', '48,633', '0', '1');
INSERT INTO `stadiums` VALUES ('84', 'Citi Field', 'New York Mets', '126th St. & Roosevelt Ave., Queens, NY 11368', '(718) 507-6387', 'April 13, 2009', '41,922', '0', '1');
INSERT INTO `stadiums` VALUES ('85', 'Citizens Bank Park', 'Philadelphia Phillies', '1 Citizens Bank Way, Philadelphia, PA 19148', '(215) 463-1000', 'April 3, 2004', '43,651', '0', '1');
INSERT INTO `stadiums` VALUES ('86', 'Coors Field', 'Colorado Rockies', '2001 Blake St, Denver, CO 80205', '(303) 292-0200', 'April 26, 1995', '50,480', '0', '1');
INSERT INTO `stadiums` VALUES ('87', 'Dodger Stadium', 'Los Angeles Dodgers', '1000 Elysian Park Avenue, Los Angeles, CA 90090', '(323) 224-1507', 'April 10, 1962', '56,000', '0', '1');
INSERT INTO `stadiums` VALUES ('88', 'Great America Ball Park', 'Cincinnati Reds', '100 Joe Nuxhall Way, Cincinnati, OH 45202', '(513) 381-7337', 'March 31, 2003', '42,319', '0', '1');
INSERT INTO `stadiums` VALUES ('89', 'Marlins Park', 'Miami Marlins', '501 Marlins Way, Miami, FL 33125', '(305)480-1300', 'April 4, 2012', '37,442', '0', '1');
INSERT INTO `stadiums` VALUES ('90', 'Miller Park', 'Milwaukee Brewers', '1 Brewers Way, Milwaukee, WI 53214', '(414) 902-4400', 'April 6, 2001', '41,900', '0', '1');
INSERT INTO `stadiums` VALUES ('91', 'Nationals Park', 'Washington Nationals', '1500 S Capitol St SE, Washington, DC 20003', '(202) 675-6287', 'March 30, 2008', '41,418', '0', '1');
INSERT INTO `stadiums` VALUES ('92', 'Petco Park', 'San Diego Padres', '19 Tony Gwynn Drive, San Diego, CA 92101', '(619) 795-5000', 'April 8, 2004', '42,524', '0', '1');
INSERT INTO `stadiums` VALUES ('93', 'PNC Park', 'Pittsburgh Pirates', '115 Federal St, Pittsburgh, PA 15212', '(412) 321-2827', 'March 31, 2001', '38,362', '0', '1');
INSERT INTO `stadiums` VALUES ('94', 'Turner Field', 'Atlanta Braves', '755 Hank Aaron Drive, Atlanta, GA 30315', '(404) 522-7630', 'March 29, 1997', '49,586', '0', '1');
INSERT INTO `stadiums` VALUES ('95', 'me', 'me', '24261 bonnie lane, laguna niguel,ca 92677', 'me', 'me', 'me', '0', '1');
INSERT INTO `stadiums` VALUES ('96', 'me', 'you', null, null, null, null, '0', '1');
INSERT INTO `stadiums` VALUES ('97', 'you', 'me', null, null, null, null, '0', '1');

-- ----------------------------
-- Table structure for users
-- ----------------------------
DROP TABLE IF EXISTS `users`;
CREATE TABLE `users` (
  `id` bigint(6) NOT NULL AUTO_INCREMENT,
  `firstName` varchar(255) NOT NULL,
  `lastName` varchar(255) NOT NULL,
  `username` varchar(254) NOT NULL,
  `email` varchar(254) NOT NULL,
  `password` varchar(36) DEFAULT NULL,
  `address` text,
  `city` varchar(255) DEFAULT NULL,
  `zipCode` int(5) DEFAULT NULL,
  `country` varchar(255) DEFAULT NULL,
  `cellPhone` varchar(255) DEFAULT NULL,
  `cellPhoneProvider` varchar(254) DEFAULT NULL,
  `dateCreated` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  `admin` smallint(1) unsigned DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=31 DEFAULT CHARSET=latin1;

-- ----------------------------
-- Records of users
-- ----------------------------
INSERT INTO `users` VALUES ('1', 'admin2', 'admin23', 'admin', 'admin2@2d22.cod', '21232f297a57a5a743894a0e4a801fc3', '25 Lorem Ipsem', 'Lorem', '92677', 'Spain', '9999999999', 'Alltel', '2014-04-27 16:25:38', '1');
INSERT INTO `users` VALUES ('2', 'Shawn', 'Azar', 'cydia', 'cydiasa@gmail.com', '39b517d90fb2e4cacdb97f30ee15f13e', '2575 McCabe Way', 'Irvine', '92677', 'USA', '9494442196', 'sprint', '2014-04-24 00:24:55', '1');
INSERT INTO `users` VALUES ('3', 'Jerry', 'Lebowitz', 'jerry', 'jer1ry@lebowitz.com', 'dba8700ccbafad828b83b29aa87a9b4f', '25 Lorem Ipsem', 'Lorem', '99999', 'United States Of America', '9999999999', '3 River Wireless', '2014-04-27 01:12:46', '1');
INSERT INTO `users` VALUES ('4', 'Can', 'Dalgir', 'can', 'me@me.me', 'ab430bb8f2971825c7e8eec06802f26b', '255 Awesome Way', 'Awesome Town', '925614', 'USA', '9494444444', 'att', '2014-04-24 00:24:59', '1');
INSERT INTO `users` VALUES ('20', 'admin', 'admin32', 'admin1', 'admin@admin.com', 'ee11cbb19052e40b07aac0ca060c23ee', '25 Lorem Ipsem', 'Lorem', '99999', 'United States Of America', '9999999999', '3 River Wireless', '2014-04-27 16:17:47', '0');
INSERT INTO `users` VALUES ('21', 'admin', 'admin32', 'admin2', 'admin@admin.com', 'ee11cbb19052e40b07aac0ca060c23ee', '25 Lorem Ipsem', 'Lorem', '99999', 'Spain', '9999999999', '3 River Wireless', '2014-04-27 16:17:50', '0');
INSERT INTO `users` VALUES ('22', 'admin', 'admin32', 'admin3', 'admin@admin.com', 'ee11cbb19052e40b07aac0ca060c23ee', '25 Lorem Ipsem', 'Lorem', '99999', 'France', '9999999999', '3 River Wireless', '2014-04-27 16:17:51', '0');
INSERT INTO `users` VALUES ('23', 'admin', 'admin32', 'admin4', 'admin@admin.com', 'ee11cbb19052e40b07aac0ca060c23ee', '25 Lorem Ipsem', 'Lorem', '99999', 'United States Of America', '9999999999', '3 River Wireless', '2014-04-27 16:17:51', '0');
INSERT INTO `users` VALUES ('24', 'admin', 'admin32', 'admin5', 'admin@admin.com', 'ee11cbb19052e40b07aac0ca060c23ee', '25 Lorem Ipsem', 'Lorem', '99999', 'United States Of America', '9999999999', '3 River Wireless', '2014-04-27 16:17:52', '0');
INSERT INTO `users` VALUES ('25', 'admin', 'admin32', 'admin6', 'admin@admin.com', 'ee11cbb19052e40b07aac0ca060c23ee', '25 Lorem Ipsem', 'Lorem', '99999', 'United States Of America', '9999999999', '3 River Wireless', '2014-04-27 16:17:52', '0');
INSERT INTO `users` VALUES ('26', 'admin', 'admin32', 'admin7', 'admin@admin.com', 'ee11cbb19052e40b07aac0ca060c23ee', '25 Lorem Ipsem', 'Lorem', '99999', 'United States Of America', '9999999999', '3 River Wireless', '2014-04-27 16:17:53', '0');
INSERT INTO `users` VALUES ('27', 'admin', 'admin32', 'admin8', 'admin@admin.com', 'ee11cbb19052e40b07aac0ca060c23ee', '25 Lorem Ipsem', 'Lorem', '99999', 'United States Of America', '9999999999', '3 River Wireless', '2014-04-27 16:17:53', '0');
INSERT INTO `users` VALUES ('28', 'admin', 'admin32', 'admin9', 'admin@admin.com', 'ee11cbb19052e40b07aac0ca060c23ee', '25 Lorem Ipsem', 'Lorem', '99999', 'United States Of America', '9999999999', '3 River Wireless', '2014-04-27 16:17:54', '0');
