#include <vector>
#include <time.h>

class myMovie{
	
	std::vector<std::string> title = {"The Godfather", "Shawshank Redemption", "Pulp Fiction", "About Time", "Star Wars", "The Dark Knight", "Goodfellas", "The Matrix", "Schindlers List", "The Empire Strikes Back", "Indiana Jones", "Fight Club", "Saving Private Ryan", "Back To The Future", "Gladiator", "The Silence Of The Lambs", "The Fellowship of the Ring", "Return of the King", "The Two Towers", "One Flew Over the Cuckoos Nest", "Casablanca", "The Shining", "Braveheart", "The Outlaw King", "Citizen Kane", "Unicorn Store", "Apocalypse Now", "Inception", "Titanic", "Seven", "Jaws", "How To Train Your Dragon", "The Good The Bad and The Ugly", "Jurassic Park", "Jurassic World", "Terminator", "Rocky", "The Usual Suspects", "Die Hard", "Full Metal Jacket", "Dirty Dancing", "A Clockwork Orange", "Taxi Driver", "Psycho", "The Birds", "Alien", "Aliens", "Toy Story", "The Green Mile", "The Departed", "Ghost", "Footloose", "Flashdance", "Fame", "Sister Act", "The Wizard of Oz", "Its a Wonderful Life", "The Big Lebowski", "Blade Runner", "Reservoir Dogs", "No Country for Old Men", "Wolf of Wall Street", "Fargo", "La La Land", "Gone With The Wind", "Scarface", "The Lion King", "The Little Mermaid", "Mulan", "Frozen", "Good Will Hunting", "Slumdog Millionaire", "Monty Python and the Holy Grail", "Monty Python and the Life of Brian"};

	public :
	std::string get_movie(std::string codeword);
	
};

class myMusic{
	
	std::vector<std::string> artist = {"Amy Winehouse", "Taylor Swift", "Carly Rae Jepsen", "Ellie Goulding", "Panic At The Disco", "All Time Low", "Slipknot", "Disturbed", "Adele", "Airbourne", "Alice Cooper", "Alexandra Burke", "Alter Bridge", "Amy MacDonald", "Bring Me The Horizon", "Paradise Fears", "Cardi B", "Kygo", "Alan Walker", "Sia", "Dido", "A Day To Remember", "A Perfect Circle", "Avenged Sevenfold", "BTS", "Twice", "Blackpink", "Garbage", "TLC", "Nirvana", "Halestorm", "Childish Gambino", "Delain", "Die Antwoord", "Roy Orbison", "Paramore", "Shinedown", "Linkin Park", "Parkway Drive", "Bebe Rexha", "Pink Floyd", "Kamelot", "Biffy Clyro", "Machine Head", "Motionless In White", "Nickelback", "Porter Robinson", "Mike Shinoda", "Trivium", "Within Temptation", "Aimer", "Loona", "Lisa", "Cat Stevens", "Elvis Presley", "Led Zeppelin", "Emma Blackery", "Spice Girls", "Evanescence", "Metallica", "Lana Del Rey", "Metric", "Massive Attack", "Enya"};
	
	public :
	std::string get_music(std::string codeword);
	
};

class myCities{
	
	std::vector<std::string> city = {"Glasgow", "Aberdeen", "Edinburgh", "Inverness", "Perth", "Dundee", "Stirling", "Birmingham", "Belfast", "Manchester", "London", "Norwich", "Leeds", "York", "Swansea", "Cardiff", "Liverpool", "Bristol", "Newcastle", "Sheffield", "Oxford", "Brighton", "Portsmouth", "Plymouth", "Bath", "Wakefield", "Hull", "Derry", "Armagh", "Carlisle", "Westminster", "Chelmsford", "Cambridge", "Winchester", "Bangor", "Exeter", "Leicester", "Lancaster", "Preston", "Canterbury", "Hereford", "Nottingham", "Lincoln", "Peterborough", "Sunderland"};
	
	public :
	std::string get_city(std::string codeword);
	
};

class myCountries{
	
	std::vector<std::string> country = {"Scotland", "England", "Ireland", "Wales", "France", "USA", "Spain", "Portugal", "Germany", "Netherlands", "Belgium", "Italy", "Greece", "Malta", "Cyprus", "Israel", "Turkey", "Palestine", "Pakistan", "Turkmenistan", "Kazakhstan", "Russia", "Sweden", "Norway", "Finland", "Switzerland", "Iceland", "Greenland", "Afghanistan", "India", "China", "Japan", "Estonia", "Albania", "Czech Republic", "Trinidad and Tobego", "Bosnia and Herzegovina", "Romania", "Ukraine", "Denmark", "Canada", "Peru", "Argentina", "Brazil", "Iraq", "Iran", "Australia", "New Zealand", "Indonesia", "Democratic Republic of Korea", "South Korea", "Nepal", "Cameroon", "Sierra Leone", "Egypt", "Tunisia", "Jordan", "United Arab Emirates", "Niger", "Uraguay", "Paraguay", "Columbia", "Cuba", "Venezuela", "Mexico", "South Africa", "Zimbabwe", "Ethiopia"};
	
	public :
	std::string get_country(std::string codeword);
	
};

void display_misses(int misses);
// Declare functions
void greet();
void end_game(std::string answer,std::string codeword);
void display_status(std::vector<char> incorrect, std::string answer);