#ifndef TPOTENTIALDISEASE_H
#define TPOTENTIALDISEASE_H

// System include
#include <iostream>
#include <string>
using namespace std;

// Personnal include
#include "c:\Users\asduc.INSA-LYON\Documents\G�nie logiciel\Genie-Logiciel\DiseaseForecaster\tests\AbstractTest.h"
#include "c:\Users\asduc.INSA-LYON\Documents\G�nie logiciel\Genie-Logiciel\DiseaseForecaster\tests\MethodTest.h"
#include "PotentialDisease.h"

// Constants

// Types
class TPotentialDisease;

class TPotentialDiseaseMethod : public MethodTest
{
public:
    TPotentialDiseaseMethod(TPotentialDisease* tmp)
     :outter(tmp)
     {}
 protected:
     TPotentialDisease* outter;
 };

// Class
class TPotentialDisease : public AbstractTest
{
public:
   // Class constructor
   TPotentialDisease() {}

   // This Method add every test method in the run engine
   void init ()
   {
       addTest(new PotentialDiseaseTest(this));
       addTest(new DisplayContentTest(this));
   }

   /*
   Here you can add one event method to handle your tests variables and objects.
    Like beforeEachTest() or afterClass()
   */

   // Test class for the method PotentialDiseaseTest of class PotentialDisease
   class PotentialDiseaseTest : public TPotentialDiseaseMethod
   {
   public:
       PotentialDiseaseTest(TPotentialDisease* tmp): TPotentialDiseaseMethod(tmp) { testResult.name = "PotentialDiseaseTest"; }
       TestResult execute()
        {
		   cout << "Test de cr�ation d'un objet PotentialDisease" << endl;

		   int idTest;
		   string nameTest;
		   double matchingRateTest;
		   map<string, double> continuousAttributesValuesTest;
		   map<string, string> discreteAttributesValuesTest;

		   // Test de cr�ation d'un objet PotentialDisease avec des param�tres corrects
		   cout << "Saisir un id de maladie : ";
		   cin >> idTest;

		   cout << "Saisir un nom de maladie : ";
		   cin >> nameTest;

		   cout << "Saisir un taux de correspondance : ";
		   cin >> matchingRateTest;

		   continuousAttributesValuesTest[nameTest] = matchingRateTest;

		   discreteAttributesValuesTest[nameTest] = matchingRateTest;

		   PotentialDisease potentialD1(idTest, nameTest, matchingRateTest, continuousAttributesValuesTest, discreteAttributesValuesTest);


		   // Test de cr�ation d'un objet PotentialDisease avec un id de maladie d�j� existant
		   cout << "Saisir un id de maladie existant : ";
		   cin >> idTest;

		   cout << "Saisir un nom de maladie : ";
		   cin >> nameTest;

		   cout << "Saisir un taux de correspondance : ";
		   cin >> matchingRateTest;

		   continuousAttributesValuesTest[nameTest] = matchingRateTest;

		   discreteAttributesValuesTest[nameTest] = matchingRateTest;

		   PotentialDisease potentialD2(idTest, nameTest, matchingRateTest, continuousAttributesValuesTest, discreteAttributesValuesTest);


		   // Test de cr�ation d'un objet PotentialDisease avec un nom de maladie existant
		   cout << "Saisir un id de maladie : ";
		   cin >> idTest;

		   cout << "Saisir un nom de maladie existant : ";
		   cin >> nameTest;

		   cout << "Saisir un taux de correspondance : ";
		   cin >> matchingRateTest;

		   continuousAttributesValuesTest[nameTest] = matchingRateTest;

		   discreteAttributesValuesTest[nameTest] = matchingRateTest;

		   PotentialDisease potentialD3(idTest, nameTest, matchingRateTest, continuousAttributesValuesTest, discreteAttributesValuesTest);


		   // Test de cr�ation d'un objet PotentialDisease avec un taux de correspondance impossible ici < 0
		   cout << "Saisir un id de maladie : ";
		   cin >> idTest;

		   cout << "Saisir un nom de maladie : ";
		   cin >> nameTest;

		   cout << "Saisir un taux de correspondance inf�rieur � 0 : ";
		   cin >> matchingRateTest;

		   continuousAttributesValuesTest[nameTest] = matchingRateTest;

		   discreteAttributesValuesTest[nameTest] = matchingRateTest;

		   PotentialDisease potentialD4(idTest, nameTest, matchingRateTest, continuousAttributesValuesTest, discreteAttributesValuesTest);


		   // Test de cr�ation d'un objet PotentialDisease avec un taux de correspondance impossible ici > 100
		   cout << "Saisir un id de maladie : ";
		   cin >> idTest;

		   cout << "Saisir un nom de maladie : ";
		   cin >> nameTest;

		   cout << "Saisir un taux de correspondance sup�rieur � 100 : ";
		   cin >> matchingRateTest;

		   continuousAttributesValuesTest[nameTest] = matchingRateTest;

		   discreteAttributesValuesTest[nameTest] = matchingRateTest;

		   PotentialDisease potentialD5(idTest, nameTest, matchingRateTest, continuousAttributesValuesTest, discreteAttributesValuesTest);


		   // Test de cr�ation d'un objet PotentialDisease avec des lettres dans le taux de correspondance
		   cout << "Saisir un id de maladie : ";
		   cin >> idTest;

		   cout << "Saisir un nom de maladie : ";
		   cin >> nameTest;

		   cout << "Saisir un taux de correspondance contenant une ou des lettres : ";
		   cin >> matchingRateTest;

		   continuousAttributesValuesTest[nameTest] = matchingRateTest;

		   discreteAttributesValuesTest[nameTest] = matchingRateTest;

		   PotentialDisease potentialD6(idTest, nameTest, matchingRateTest, continuousAttributesValuesTest, discreteAttributesValuesTest);

           return testResult;
        }
   };

   // Test class for the method DisplayContentTest of class PotentialDisease
   class DisplayContentTest : public TPotentialDiseaseMethod
   {
   public:
       DisplayContentTest(TPotentialDisease* tmp): TPotentialDiseaseMethod(tmp) { testResult.name = "DisplayContentTest"; }
       TestResult execute()
        {
		   cout << "Test d'affichage d'un objet PotentialDisease" << endl;

		   int idTest;
		   string nameTest;
		   double matchingRateTest;
		   map<string, double> continuousAttributesValuesTest;
		   map<string, string> discreteAttributesValuesTest;

		   // Cr�ation d'un objet PotentialDisease avec des param�tres corrects
		   cout << "Saisir un id de maladie : ";
		   cin >> idTest;

		   cout << "Saisir un nom de maladie : ";
		   cin >> nameTest;

		   cout << "Saisir un taux de correspondance : ";
		   cin >> matchingRateTest;

		   continuousAttributesValuesTest[nameTest] = matchingRateTest;

		   discreteAttributesValuesTest[nameTest] = matchingRateTest;

		   PotentialDisease potentialD1(idTest, nameTest, matchingRateTest, continuousAttributesValuesTest, discreteAttributesValuesTest);


		   // Cr�ation d'un objet PotentialDisease avec un id de maladie d�j� existant
		   cout << "Saisir un id de maladie existant : ";
		   cin >> idTest;

		   cout << "Saisir un nom de maladie : ";
		   cin >> nameTest;

		   cout << "Saisir un taux de correspondance : ";
		   cin >> matchingRateTest;

		   continuousAttributesValuesTest[nameTest] = matchingRateTest;

		   discreteAttributesValuesTest[nameTest] = matchingRateTest;

		   PotentialDisease potentialD2(idTest, nameTest, matchingRateTest, continuousAttributesValuesTest, discreteAttributesValuesTest);
		   

		   // Test d'affichage d'un objet PotentialDisease avec des param�tres corrects 
		   potentialD1.displayContent();

		   // Test d'affichage d'un objet PotentialDisease avec un id de maladie d�j� �xistant 
		   potentialD2.displayContent();

          return testResult;
        }
   };


   // Destructor
    ~TPotentialDisease() {}
};

#endif //TPOTENTIALDISEASE_H
