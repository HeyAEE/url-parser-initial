#include "FragmentExtractor.h"

FragmentExtractor::FragmentExtractor(const std::string & value)
{
	// look for '#' character
	// if exists, _component = everything to the right of '#'
	// _base = evertyhing to the left of '#', or the entire value string if '#' doens't exist
}

bool FragmentExtractor::HasComponent() const
{
	return false; // TODO return true if a fragment was found
}

const std::string & FragmentExtractor::GetBase() const
{
	return _base;
}

const std::string & FragmentExtractor::GetComponent() const
{
	return _component;
}
