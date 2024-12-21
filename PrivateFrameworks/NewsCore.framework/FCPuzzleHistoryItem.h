/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCPuzzleHistoryItem : NSObject {
    NSNumber * _behaviorFlags;
    NSNumber * _bestScore;
    NSDate * _completedDate;
    NSNumber * _difficulty;
    NSDate * _firstCompletedDate;
    NSNumber * _firstPlayDuration;
    NSString * _identifier;
    NSDate * _lastPlayedDate;
    long long  _playDuration;
    NSData * _progressData;
    long long  _progressLevel;
    NSDate * _publishDate;
    NSString * _puzzleID;
    NSString * _puzzleTypeID;
    NSString * _rankID;
    NSNumber * _score;
    NSNumber * _usedReveal;
}

@property (nonatomic, readonly) CKRecord *asCKRecord;
@property (nonatomic, readonly) NSNumber *behaviorFlags;
@property (nonatomic, readonly) NSNumber *bestScore;
@property (nonatomic, readonly) NSDate *completedDate;
@property (nonatomic, readonly) NSNumber *difficulty;
@property (nonatomic, readonly) NSDate *firstCompletedDate;
@property (nonatomic, readonly) NSNumber *firstPlayDuration;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) NSDate *lastPlayedDate;
@property (nonatomic, readonly) long long playDuration;
@property (nonatomic, readonly) NSData *progressData;
@property (nonatomic, readonly) long long progressLevel;
@property (nonatomic, readonly) NSDate *publishDate;
@property (nonatomic, readonly, copy) NSString *puzzleID;
@property (nonatomic, readonly, copy) NSString *puzzleTypeID;
@property (nonatomic, readonly) NSString *rankID;
@property (nonatomic, readonly) NSNumber *score;
@property (nonatomic, readonly) NSNumber *usedReveal;

- (void).cxx_destruct;
- (id)asCKRecord;
- (id)behaviorFlags;
- (id)bestScore;
- (id)completedDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)difficulty;
- (id)firstCompletedDate;
- (id)firstPlayDuration;
- (id)identifier;
- (id)initWithEntryID:(id)arg1 puzzleID:(id)arg2 puzzleTypeID:(id)arg3 progressData:(id)arg4 progressLevel:(long long)arg5 score:(id)arg6 rankID:(id)arg7 usedReveal:(id)arg8 playDuration:(long long)arg9 lastPlayedDate:(id)arg10 completedDate:(id)arg11 firstCompletedDate:(id)arg12 firstPlayDuration:(id)arg13 bestScore:(id)arg14 difficulty:(id)arg15 publishDate:(id)arg16 behaviorFlags:(id)arg17;
- (id)lastPlayedDate;
- (long long)playDuration;
- (id)progressData;
- (long long)progressLevel;
- (id)publishDate;
- (id)puzzleID;
- (id)puzzleTypeID;
- (id)rankID;
- (id)score;
- (id)usedReveal;

@end