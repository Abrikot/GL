#include "TAnalyse.h"
#include "Analyse.h"
#include "HealthPrint.h"
#include "PotentialDisease.h"


TAnalyse::TAnalyse()
{
}


TAnalyse::~TAnalyse()
{
}

void TAnalyse::AnalyseTest()
{
	// Cr�ation d'une analyse avec des param�tres corrects
	Analyse analyseCorrects(HealthPrint healthPrint, vector<PotentialDisease> diseases);

	analyseCorrects.DisplayContent();
	
	// Cr�ation d'une analyse avec des param�tres erron�s
	Analyse analyseEronnes(HealthPrint healthPrint, vector<PotentialDisease> diseases);

	// Cr�ation d'une analyse avec des param�tres manquants
	Analyse analyseManquants(HealthPrint healthPrint);
}

void TAnalyse::displayContentTest()
{
	// Demande d'affichage d'une analyse correcte

	// Demande d'affichage d'une analyse corrompue

	// Demande d'affichage d'una analyse manquante

}

void TAnalyse::displayHeaderTest()
{
	// Demande d'affichage d'une analyse correcte

	// Demande d'affichage d'une analyse corrompue

	// Demande d'affichage d'una analyse manquante

}
