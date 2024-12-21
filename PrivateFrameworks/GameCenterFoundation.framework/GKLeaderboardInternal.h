/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLeaderboardInternal : GKInternalRepresentation {
    NSString * _activityType;
    NSString * _baseLeaderboardID;
    NSString * _context;
    GKPlayerInternal * _creator;
    double  _duration;
    unsigned short  _friendRank;
    unsigned short  _friendRankCount;
    NSString * _groupIdentifier;
    bool  _hasActiveChallenges;
    NSDictionary * _icons;
    NSString * _identifier;
    NSDate * _lastSubmittedDate;
    NSString * _leaderboardDescription;
    NSString * _leaderboardSetIdentifier;
    unsigned int  _maxRank;
    NSDate * _nextStartDate;
    unsigned int  _overallRank;
    unsigned int  _overallRankCount;
    GKScoreInternal * _playerScore;
    NSString * _recordID;
    unsigned long long  _releaseState;
    NSArray * _scores;
    NSDate * _startDate;
    bool  _supportsChallenges;
    NSString * _title;
    long long  _type;
    NSDictionary * _userInfo;
}

@property (nonatomic, copy) NSString *activityType;
@property (nonatomic, retain) NSString *baseLeaderboardID;
@property (nonatomic, retain) NSString *category;
@property (nonatomic, retain) NSString *context;
@property (nonatomic, retain) GKPlayerInternal *creator;
@property (nonatomic) double duration;
@property (nonatomic) unsigned short friendRank;
@property (nonatomic) unsigned short friendRankCount;
@property (nonatomic, retain) NSString *groupIdentifier;
@property (nonatomic) bool hasActiveChallenges;
@property (nonatomic, retain) NSDictionary *icons;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDate *lastSubmittedDate;
@property (nonatomic, copy) NSString *leaderboardDescription;
@property (nonatomic, retain) NSString *leaderboardSetIdentifier;
@property (nonatomic, retain) NSString *localizedTitle;
@property (nonatomic, readonly) unsigned long long maxRange;
@property (nonatomic) unsigned int maxRank;
@property (nonatomic, retain) NSDate *nextStartDate;
@property (nonatomic) unsigned int overallRank;
@property (nonatomic) unsigned int overallRankCount;
@property (nonatomic, retain) GKScoreInternal *playerScore;
@property (nonatomic, retain) NSString *recordID;
@property (nonatomic) unsigned long long releaseState;
@property (nonatomic, retain) NSArray *scores;
@property (nonatomic, retain) NSDate *startDate;
@property (nonatomic) bool supportsChallenges;
@property (nonatomic, retain) NSString *title;
@property (nonatomic) long long type;
@property (nonatomic, retain) NSDictionary *userInfo;

+ (id)secureCodedPropertyKeys;

- (void).cxx_destruct;
- (id)activityType;
- (id)baseLeaderboardID;
- (id)category;
- (id)context;
- (id)creator;
- (double)duration;
- (unsigned short)friendRank;
- (unsigned short)friendRankCount;
- (id)groupIdentifier;
- (bool)hasActiveChallenges;
- (unsigned long long)hash;
- (id)icons;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (id)lastSubmittedDate;
- (id)leaderboardDescription;
- (id)leaderboardSetIdentifier;
- (id)localizedTitle;
- (unsigned long long)maxRange;
- (unsigned int)maxRank;
- (id)nextStartDate;
- (unsigned int)overallRank;
- (unsigned int)overallRankCount;
- (id)playerScore;
- (id)recordID;
- (unsigned long long)releaseState;
- (id)scores;
- (void)setActivityType:(id)arg1;
- (void)setBaseLeaderboardID:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setCreator:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setFriendRank:(unsigned short)arg1;
- (void)setFriendRankCount:(unsigned short)arg1;
- (void)setGroupIdentifier:(id)arg1;
- (void)setHasActiveChallenges:(bool)arg1;
- (void)setIcons:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setLastSubmittedDate:(id)arg1;
- (void)setLeaderboardDescription:(id)arg1;
- (void)setLeaderboardSetIdentifier:(id)arg1;
- (void)setLocalizedTitle:(id)arg1;
- (void)setMaxRank:(unsigned int)arg1;
- (void)setNextStartDate:(id)arg1;
- (void)setOverallRank:(unsigned int)arg1;
- (void)setOverallRankCount:(unsigned int)arg1;
- (void)setPlayerScore:(id)arg1;
- (void)setRecordID:(id)arg1;
- (void)setReleaseState:(unsigned long long)arg1;
- (void)setScores:(id)arg1;
- (void)setStartDate:(id)arg1;
- (void)setSupportsChallenges:(bool)arg1;
- (void)setTitle:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUserInfo:(id)arg1;
- (id)startDate;
- (bool)supportsChallenges;
- (id)title;
- (long long)type;
- (id)userInfo;

@end