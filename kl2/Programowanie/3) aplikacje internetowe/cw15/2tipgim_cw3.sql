-- phpMyAdmin SQL Dump
-- version 5.1.0
-- https://www.phpmyadmin.net/
--
-- Host: 127.0.0.1
-- Czas generowania: 31 Maj 2021, 13:12
-- Wersja serwera: 10.4.18-MariaDB
-- Wersja PHP: 8.0.3

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Baza danych: `2tipgim_cw3`
--
CREATE DATABASE IF NOT EXISTS `2tipgim_cw3` DEFAULT CHARACTER SET utf8mb4 COLLATE utf8mb4_general_ci;
USE `2tipgim_cw3`;

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `course`
--

DROP TABLE IF EXISTS `course`;
CREATE TABLE `course` (
  `ID` int(11) NOT NULL,
  `Name` varchar(50) NOT NULL,
  `DateStart` date NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Zrzut danych tabeli `course`
--

INSERT INTO `course` (`ID`, `Name`, `DateStart`) VALUES
(1, 'Matematyka', '2021-05-31'),
(2, 'Fizyka', '2021-06-09'),
(7, 'Algebra', '2021-06-18'),
(11, 'Mechanika', '2021-05-11'),
(12, 'Biologia', '2021-05-19'),
(13, 'Chemia', '2021-05-19'),
(14, 'Angielski', '2021-05-12');

-- --------------------------------------------------------

--
-- Struktura tabeli dla tabeli `student`
--

DROP TABLE IF EXISTS `student`;
CREATE TABLE `student` (
  `ID` int(11) NOT NULL,
  `FirstName` varchar(50) NOT NULL,
  `LastName` varchar(50) NOT NULL,
  `CourseID` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Zrzut danych tabeli `student`
--

INSERT INTO `student` (`ID`, `FirstName`, `LastName`, `CourseID`) VALUES
(1, 'Tomasz', 'Bomasz', 1),
(2, 'Hubert', 'Hnatow', 2),
(3, 'Krzysztof', 'Rak', 13),
(4, 'Jacob', 'Lech', 11),
(5, 'Kacper', 'Szczudło', 7),
(6, 'Bartosz', 'Korba', 14);

--
-- Indeksy dla zrzutów tabel
--

--
-- Indeksy dla tabeli `course`
--
ALTER TABLE `course`
  ADD PRIMARY KEY (`ID`);

--
-- Indeksy dla tabeli `student`
--
ALTER TABLE `student`
  ADD PRIMARY KEY (`ID`),
  ADD KEY `fk_student_course` (`CourseID`);

--
-- AUTO_INCREMENT dla zrzuconych tabel
--

--
-- AUTO_INCREMENT dla tabeli `course`
--
ALTER TABLE `course`
  MODIFY `ID` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=15;

--
-- Ograniczenia dla zrzutów tabel
--

--
-- Ograniczenia dla tabeli `student`
--
ALTER TABLE `student`
  ADD CONSTRAINT `fk_student_course` FOREIGN KEY (`CourseID`) REFERENCES `course` (`ID`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
