#include "Processor.h"

Processor::Processor()
{
	freqeuency = 0;
	cores = 0;
	model = "no model";
	brand = "no brand";
}

Processor::Processor(float freqeuency, int cores, string model, string brand) : freqeuency(freqeuency), cores(cores), model(model), brand(brand) {}

void Processor::Show() const
{
	cout << "Processor: " << brand << " " << model << endl;
	cout << "Frequency: " << freqeuency << " GHz" << endl;
	cout << "Cores: " << cores << endl;
}