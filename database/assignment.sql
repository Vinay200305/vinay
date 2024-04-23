-- phpMyAdmin SQL Dump
-- version 5.2.1
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Generation Time: Mar 05, 2024 at 12:20 PM
-- Server version: 10.4.32-MariaDB
-- PHP Version: 8.0.30

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Database: `tops`
--

-- --------------------------------------------------------

--
-- Table structure for table `customer`
--

CREATE TABLE `customer` (
  `CNM` int(11) NOT NULL,
  `CNAME` char(20) DEFAULT NULL,
  `CITY` char(30) DEFAULT NULL,
  `RATING` int(11) DEFAULT NULL,
  `SNO` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `customer`
--

INSERT INTO `customer` (`CNM`, `CNAME`, `CITY`, `RATING`, `SNO`) VALUES
(201, 'Hoffman', 'London', 100, 1001),
(202, 'Giovanne', 'Roe', 200, 1003),
(203, 'Liu', 'Aan jose', 300, 1002),
(204, 'Grass', 'Barcelona', 100, 1002),
(206, 'Clemens', 'London', 300, 1007),
(207, 'Pereira', 'Roe', 100, 1004);

-- --------------------------------------------------------

--
-- Table structure for table `employee`
--

CREATE TABLE `employee` (
  `employee_id` int(11) NOT NULL,
  `first_name` char(20) DEFAULT NULL,
  `last_name` varchar(20) DEFAULT NULL,
  `salary` int(11) DEFAULT NULL,
  `joining_date` datetime DEFAULT NULL,
  `deparment` char(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `employee`
--

INSERT INTO `employee` (`employee_id`, `first_name`, `last_name`, `salary`, `joining_date`, `deparment`) VALUES
(1, 'john', 'abraham', 1000000, '2013-01-01 12:00:00', 'Banking'),
(2, 'michael', 'clarke', 800000, '2013-01-01 12:00:00', 'Insurance'),
(3, 'Roy', 'Thomas', 700000, '2013-02-01 12:00:00', 'Banking'),
(4, 'Tom', 'Jose', 600000, '2013-02-01 12:00:00', 'Insurance'),
(5, 'Jerry', 'pinro', 650000, '2013-02-01 12:00:00', 'Insurance'),
(6, 'Philip', 'Mathew', 750000, '2013-01-01 12:00:00', 'Services'),
(7, 'TestName1', '123', 650000, '2013-01-01 12:00:00', 'Services'),
(8, 'TestName2', 'Lname%', 600000, '2013-02-01 12:00:00', 'Insuance');

--
-- Triggers `employee`
--
DELIMITER $$
CREATE TRIGGER `em` AFTER INSERT ON `employee` FOR EACH ROW BEGIN 
   INSERT into viewtable set id=new.employee_id,
   f_name=new.first_name,
   l_name=new.last_name,
   salary=new.salary,
   jo_date=new.joining_date,
   deparment=new.deparment;
   END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `em1` AFTER INSERT ON `employee` FOR EACH ROW BEGIN 
   INSERT into viewtable set id=new.employee_id,
   f_name=new.first_name,
   l_name=new.last_name,
   salay=new.salary,
   jo_date=new.joining_date,
   deparment=new.deparment;
   END
$$
DELIMITER ;
DELIMITER $$
CREATE TRIGGER `t1` AFTER INSERT ON `employee` FOR EACH ROW BEGIN 
   INSERT into viewtable set id=new.employee_id;
   END
$$
DELIMITER ;

-- --------------------------------------------------------

--
-- Table structure for table `exam`
--

CREATE TABLE `exam` (
  `Rollno` int(11) DEFAULT NULL,
  `s_code` varchar(10) DEFAULT NULL,
  `marks` int(11) DEFAULT NULL,
  `p_code` varchar(10) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `exam`
--

INSERT INTO `exam` (`Rollno`, `s_code`, `marks`, `p_code`) VALUES
(1, 'CS11', 50, 'CS'),
(1, 'CS12', 60, 'CS'),
(2, 'EC101', 66, 'EC'),
(2, 'EC102', 70, 'EC'),
(3, 'EC101', 45, 'EC'),
(3, 'EC102', 50, 'EC');

-- --------------------------------------------------------

--
-- Table structure for table `incentive`
--

CREATE TABLE `incentive` (
  `employee_ref_id` int(11) DEFAULT NULL,
  `Incentive_dare` datetime DEFAULT NULL,
  `Incentive_amount` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `incentive`
--

INSERT INTO `incentive` (`employee_ref_id`, `Incentive_dare`, `Incentive_amount`) VALUES
(1, '2013-02-01 00:00:00', 5000),
(2, '2013-02-01 00:00:00', 3000),
(3, '2013-02-01 00:00:00', 4000),
(1, '2013-01-01 00:00:00', 4500),
(2, '2013-01-01 00:00:00', 3500),
(1, '2013-02-01 00:00:00', 5000),
(2, '2013-02-01 00:00:00', 3000),
(3, '2013-02-01 00:00:00', 4000),
(1, '2013-01-01 00:00:00', 4500),
(2, '2013-01-01 00:00:00', 3500);

-- --------------------------------------------------------

--
-- Table structure for table `item`
--

CREATE TABLE `item` (
  `id` int(11) NOT NULL,
  `name` char(20) DEFAULT NULL,
  `mfg` timestamp(6) NOT NULL DEFAULT current_timestamp(6) ON UPDATE current_timestamp(6),
  `prise` float DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `item`
--

INSERT INTO `item` (`id`, `name`, `mfg`, `prise`) VALUES
(1, 'mous', '2024-02-16 10:55:48.256829', 1000);

-- --------------------------------------------------------

--
-- Table structure for table `item_mast`
--

CREATE TABLE `item_mast` (
  `pro_id` int(11) DEFAULT NULL,
  `pro_name` char(20) DEFAULT NULL,
  `pro_price` decimal(8,2) DEFAULT NULL,
  `pro_com` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `item_mast`
--

INSERT INTO `item_mast` (`pro_id`, `pro_name`, `pro_price`, `pro_com`) VALUES
(101, 'Mother Board', 3200.00, 15),
(102, 'Key Board', 450.00, 16),
(103, 'ZIP drive', 250.00, 14),
(104, 'Speaker', 550.00, 16),
(105, 'Moniter', 5000.00, 11),
(106, 'DVD drive', 900.00, 12),
(107, 'CD drive', 800.00, 12),
(108, 'Printer', 2600.00, 13),
(109, 'Refill cartridge', 350.00, 13),
(110, 'Mouse', 250.00, 12);

-- --------------------------------------------------------

--
-- Table structure for table `orders`
--

CREATE TABLE `orders` (
  `ord_no` int(11) NOT NULL,
  `purch_amt` decimal(8,2) DEFAULT NULL,
  `order_date` date DEFAULT NULL,
  `customer_id` int(11) DEFAULT NULL,
  `salesman_id` int(11) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `orders`
--

INSERT INTO `orders` (`ord_no`, `purch_amt`, `order_date`, `customer_id`, `salesman_id`) VALUES
(70001, 150.50, '2012-10-05', 3005, 5002),
(70002, 65.26, '2012-10-05', 3002, 5001),
(70003, 2480.40, '2012-10-10', 3009, 5003),
(70004, 110.50, '2012-08-17', 3009, 5003),
(70005, 2400.60, '2012-07-27', 3007, 5001),
(70007, 948.50, '2012-09-10', 3005, 5002),
(70008, 5760.00, '2012-10-09', 3002, 5001),
(70009, 270.65, '2012-09-10', 3001, 5005),
(70010, 1983.43, '2012-10-10', 3004, 5006),
(70011, 75.29, '2012-08-17', 3003, 5007),
(70012, 250.45, '2012-06-27', 3008, 5002),
(70013, 3045.60, '2012-04-25', 3002, 5001);

-- --------------------------------------------------------

--
-- Table structure for table `salesperson`
--

CREATE TABLE `salesperson` (
  `SNO` int(11) NOT NULL,
  `SNAME` char(20) DEFAULT NULL,
  `CITY` char(30) DEFAULT NULL,
  `COMM` varchar(20) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `salesperson`
--

INSERT INTO `salesperson` (`SNO`, `SNAME`, `CITY`, `COMM`) VALUES
(1001, 'peel', 'london', '.12'),
(1002, 'serres', 'san jose', '.13'),
(1003, 'axeirod', 'new york', '.1'),
(1004, 'motike', 'london', '.11'),
(1007, 'rafkin', 'barcelona', '.15');

-- --------------------------------------------------------

--
-- Table structure for table `student`
--

CREATE TABLE `student` (
  `Rollno` int(11) NOT NULL,
  `name` varchar(10) NOT NULL,
  `branch` varchar(20) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `student`
--

INSERT INTO `student` (`Rollno`, `name`, `branch`) VALUES
(1, 'jay', 'computer Science'),
(2, 'suhani', 'electronic and com'),
(3, 'kriti', 'electronic and com');

-- --------------------------------------------------------

--
-- Table structure for table `viewtable`
--

CREATE TABLE `viewtable` (
  `id` int(11) DEFAULT NULL,
  `f_name` char(20) DEFAULT NULL,
  `l_name` char(20) DEFAULT NULL,
  `salary` int(11) DEFAULT NULL,
  `jo_data` date DEFAULT NULL,
  `deparment` char(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `viewtable`
--

INSERT INTO `viewtable` (`id`, `f_name`, `l_name`, `salary`, `jo_data`, `deparment`) VALUES
(9, NULL, NULL, NULL, NULL, NULL);

-- --------------------------------------------------------

--
-- Table structure for table `win`
--

CREATE TABLE `win` (
  `YEA` year(4) DEFAULT NULL,
  `SUBJECT` char(30) DEFAULT NULL,
  `WINNER` char(30) DEFAULT NULL,
  `COUNTRY` char(30) DEFAULT NULL,
  `CATGORY` char(30) DEFAULT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4 COLLATE=utf8mb4_general_ci;

--
-- Dumping data for table `win`
--

INSERT INTO `win` (`YEA`, `SUBJECT`, `WINNER`, `COUNTRY`, `CATGORY`) VALUES
('1970', 'Physics', 'HannesAlfven', 'Sweden', 'Scientist'),
('1970', 'Physics', 'Louis Neel', 'France', 'Scientist'),
('1970', 'Chemistry', 'Luis Federico Leloir', 'France', 'Scientist'),
('1970', 'Physics', 'Ulf Federico Leloir', 'Sweden', 'Scientist'),
('1970', 'Physics', 'Bernard Katz', 'Germany', 'Scientist'),
('1970', 'Literature', 'Aleksandr Solzhenitsyn', 'Russia', 'Linguist'),
('1970', 'Economics', 'Paul Samuelson', 'USA', 'Economist'),
('1970', 'physiology', 'Julius Axelrod', 'USA', 'Scientist'),
('1971', 'Physics', 'Dennis Gabor', 'Hungary', 'Scientist'),
('1971', 'Chemistry', 'Gerhard Herzberg', 'Germany', 'Scientist'),
('1971', 'Peace', 'Willy Brandt', 'Germany', 'Chancellor'),
('1971', 'Literature', 'Pablo Neruda', 'Chile', 'Linguist'),
('1971', 'Economics', 'Simon Kuznets', 'Ruddia', 'Economist'),
('1978', 'Peace', 'Anwar al-Sadat', 'Egypt', 'President'),
('1978', 'Peace', 'Menachem Begin', 'Israel', 'President Minsiter'),
('1987', 'Chemistry', 'Donald J. Cram', 'USA', 'Scientist'),
('1987', 'Chemistry', 'Jean-Marie Lehn', 'France', 'Scientist'),
('1987', 'Physiology', 'Susumu TOnegawa', 'Japan', 'Scientist'),
('1994', 'Economics', 'Reinhard Selten', 'Germany', 'Economist'),
('1994', 'Peace', 'Yitzhak Rabin', 'Israel', 'President Minsiter'),
('1987', 'Physics', 'Johannes Georg Bednorz', 'Germany', 'Scientist'),
('1987', 'Literature', 'Joheph Brodsky', 'Russia', 'Linguist'),
('1987', 'Economics', 'Robert Solow', 'USA', 'Economist'),
('1994', 'Literature', 'Kenzaburooe', 'Japan', 'Linguist');

--
-- Indexes for dumped tables
--

--
-- Indexes for table `customer`
--
ALTER TABLE `customer`
  ADD PRIMARY KEY (`CNM`),
  ADD KEY `SNO` (`SNO`);

--
-- Indexes for table `employee`
--
ALTER TABLE `employee`
  ADD PRIMARY KEY (`employee_id`);

--
-- Indexes for table `exam`
--
ALTER TABLE `exam`
  ADD KEY `Rollno` (`Rollno`);

--
-- Indexes for table `item`
--
ALTER TABLE `item`
  ADD PRIMARY KEY (`id`),
  ADD UNIQUE KEY `name` (`name`);

--
-- Indexes for table `salesperson`
--
ALTER TABLE `salesperson`
  ADD PRIMARY KEY (`SNO`);

--
-- Indexes for table `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`Rollno`);

--
-- AUTO_INCREMENT for dumped tables
--

--
-- AUTO_INCREMENT for table `employee`
--
ALTER TABLE `employee`
  MODIFY `employee_id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=14;

--
-- AUTO_INCREMENT for table `item`
--
ALTER TABLE `item`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- Constraints for dumped tables
--

--
-- Constraints for table `customer`
--
ALTER TABLE `customer`
  ADD CONSTRAINT `customer_ibfk_1` FOREIGN KEY (`SNO`) REFERENCES `salesperson` (`SNO`);

--
-- Constraints for table `exam`
--
ALTER TABLE `exam`
  ADD CONSTRAINT `exam_ibfk_1` FOREIGN KEY (`Rollno`) REFERENCES `student` (`Rollno`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
