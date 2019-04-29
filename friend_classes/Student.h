﻿#pragma once
#include<iostream>
#include<string>
#include"Print.h"
using namespace std;

//В программе заполняется информация о студентах и о преподавателях.Нужно реализовать сдачу экзамена студентами преподавателям.
//Программа умеет выводить следующие результаты :
//а) Студентов мужского пола
//б) Студентов женского пола
//в) Вывести студентов по группам
//г) Самого молодого преподавателя
//д) Старшего преподавателя
//е) Вывести преподавателей по кафедрам
//ж) Список студентов, которые сдали экзамен на 5, у которого преподавателя и по какому предмету
//з) Список студентов, которые сдали экзамен на 2 и меньше, у которого преподавателя и по какому предмету.
//
//Ход решении задачи :
//1. Необходимо создать класс «студент»
//который должен содержать следующие поля :
//а) Фамилия
//б) Имя
//в) Возраст
//г) Пол
//д) Группа
//который должен содержать следующие методы :
//• Конструктор по умолчанию;
//• Конструктор с параметрами;
//• Конструктор копирования;
//• Деструктор;
//
//1.1.Необходимо создать следующие функции
//• Дружеская функцию, принимает массив объектов класса «студент» и выводит информацию о студентах на консоль.
//• Перегрузить операторы сравнения(=, !=, <>) С помощью дружественных функции.
//
//2. Необходимо создать класс «преподаватель»
//который должен содержать следующие поля :
//а) Фамилия
//б) Имя
//в) Возраст
//г) Пол
//д) Кафедра
//который должен содержать следующие методы :
//• Конструктор по умолчанию;
//• Конструктор с параметрами;
//• Конструктор копирования;
//• Деструктор;
//
//2.1.Необходимо создать следующие функции
//• Дружеская функцию, принимает массив объектов класса «преподаватель» и выводит информацию о преподавателях на консоль.
//• Перегрузить операторы сравнения(=, !=, <>) С помощью дружественных функции.
//
//3. Необходимо создать класс «экзамен»
//который должен содержать следующие поля :
//а) Название предмета;
//б) Фамилия преподавателя;
//в) Фамилия студента
//г) Оценка
//который должен содержать следующие методы :
//• Конструктор по умолчанию;
//• Конструктор с параметрами;
//• Конструктор копирования;
//• Деструктор;
//• Метод для создания экзамена(CreateExemp).Данный метод будет принимать : название предмета; оценку; объект класса студент и объект класса преподаватель, брать из данных объектов фамилии преподавателя и студента и записывать их в соответствующие поля объекта класса «экзамен».
//
//3.1.Необходимо создать следующие функции
//• Дружеская функцию, принимает массив объектов класса «экзамен» и выводит информацию об экзамене на консоль.
//
//В классе «СТУДЕНТ» и «ПРЕПОДАВАТЕЛЬ» необходимо указать, что КЛАСС «ЭКЗАМЕН» является дружественным К НИМ
//3. В функции main() :
//	• Создаем массив объектов класса «Студент»(мин - 8 студ.)
//	• Создаем массив объектов класса «Преподаватель»(мин - 2 - изложение.)
//	• Создаем для каждого студента экзамен у каждого преподавателя, то есть в данном случае надо создать 16 - объектов класса экзамен(для каждого студента два экзамена).
//	• Выполняем заданные в задаче задачи.Для выполнения задач использовать дружественные функции.
//
//	Условия для работы :
//1. Объявление классов проводить в заготовочном файле(*.h)
//2. Реализация методов класса и функций делать в файле(*.cpp)
//3. Главной функцией main() пишем в другом(в новом) файле(*.cpp)
//4. Все поля класса должны быть частными.
//5. Имена полей и методов класса должны отвечать своей сути.
//6. В деструкторе обязательно освобождать предварительно выделенную динамическую память.


class Print;
class Student {
	string name;
	int age;
public:
	Student();
	Student(string name, int age);

	friend Print;
};