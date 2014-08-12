/*
 * MailChecker.cpp
 *
 *  Created on: Aug 11, 2014
 *  Author: Flavien Moullec
 */

#include <iostream>
#include <vector>

/**
 *
 */
class MailChecker
{
public:
	MailChecker(std::string p_mail, std::string p_password,
			std::string p_protocol)
	{

	}
	virtual ~MailChecker()
	{
	}

	/**
	 *
	 * @return
	 */
	std::vector<std::string> * checkMail()
	{
		//TODO
		return NULL;
	}

private:
	std::string m_mail;
	std::string m_password;
	std::string m_protocol;
};

int main(int argc, char *argv[])
{
	bool exit = false;

	// Retreives parameters from the command line
	//TODO

	// Create the MailChecker object
	//TODO

	// Check the mail periodically
	while (!exit)
	{
		//TODO
	}

	return 0;
}
