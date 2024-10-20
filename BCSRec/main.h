#pragma once
int setLength(int input, int length); // changed void to int to be able to unit test
int setWidth(int input, int width); // changed void to int to be able to unit test
int getPerimeter(int length, int width);
int getArea(int length, int width);
void printWelcomeMenu();
void printOptions();
int getIntInput(char message[]);