/*
Navicat MySQL Data Transfer

Source Server         : localhost_3306
Source Server Version : 50616
Source Host           : localhost:3306
Source Database       : cs1d

Target Server Type    : MYSQL
Target Server Version : 50616
File Encoding         : 65001

Date: 2014-04-26 19:25:04
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
-- Table structure for users
-- ----------------------------
DROP TABLE IF EXISTS `users`;
CREATE TABLE `users` (
  `id` bigint(6) NOT NULL AUTO_INCREMENT,
  `firstName` varchar(255) NOT NULL,
  `lastName` varchar(255) NOT NULL,
  `username` varchar(254) DEFAULT NULL,
  `email` varchar(254) DEFAULT NULL,
  `password` varchar(36) DEFAULT NULL,
  `address` text,
  `city` varchar(255) DEFAULT NULL,
  `zipCode` int(5) DEFAULT NULL,
  `country` varchar(255) DEFAULT NULL,
  `cellPhone` varchar(255) DEFAULT NULL,
  `cellPhoneProvider` varchar(254) DEFAULT NULL,
  `dateCreated` timestamp NULL DEFAULT NULL ON UPDATE CURRENT_TIMESTAMP,
  `admin` smallint(1) NOT NULL DEFAULT '0',
  PRIMARY KEY (`id`)
) ENGINE=InnoDB AUTO_INCREMENT=31 DEFAULT CHARSET=latin1;
