#ifndef DBMANAGER_H
#define DBMANAGER_H

// System include
#include <iostream>
#include <QSqlDatabase>
using namespace std;

// Personnal include
#include "Disease.h"

// Constants

// Types

// Class
class DbManager
{
	// Attributes
private:
	static QSqlDatabase database;

	// Methods
public:
	// Constructors
	DbManager(const string& path);

	// Destructors
	~DbManager();

	// Others
	bool insertIntoDatabase(const vector<Disease>& diseases);
	vector<Disease> getDiseases();
	vector<shared_ptr<Attribute>> getAttributes();

private:
	bool insertIntoDatabase(const Disease& disease);
	bool insertIntoDatabase(const shared_ptr<Attribute> attribute);
	bool insertIntoDatabase(const DiscreteAttribute& attribute);
	bool insertIntoDatabase(const ContinuousAttribute& attribute);
	bool insertIntoDatabase(const int diseaseId, const int attributeId);

	vector<shared_ptr<Attribute>> getDiscriminantAttributesForDisease(int diseaseId);
	shared_ptr<Attribute> getAttributeForId(int attributeId);
	vector<interval> getNormalIntervalsForContinuousAttribute(int attributeId);
	vector<string> getNormalValuesForDiscreteAttribute(int attributeId);

	void wipeData();
};

#endif // DBMANAGER_H