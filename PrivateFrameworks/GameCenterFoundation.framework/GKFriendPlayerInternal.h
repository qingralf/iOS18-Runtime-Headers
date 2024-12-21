/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKFriendPlayerInternal : GKFamiliarPlayerInternal {
    bool  _challengedTogether;
    NSDate * _lastChallengedDate;
    GKGameInternal * _lastChallengedGame;
    NSDate * _lastPlayedDate;
    GKGameInternal * _lastPlayedGame;
    NSString * _status;
}

+ (id)secureCodedPropertyKeys;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)challengedTogether;
- (int)defaultFamiliarity;
- (bool)isFriend;
- (id)lastChallengedDate;
- (id)lastChallengedGame;
- (id)lastPlayedDate;
- (id)lastPlayedGame;
- (void)setChallengedTogether:(bool)arg1;
- (void)setLastChallengedDate:(id)arg1;
- (void)setLastChallengedGame:(id)arg1;
- (void)setLastPlayedDate:(id)arg1;
- (void)setLastPlayedGame:(id)arg1;
- (void)setStatus:(id)arg1;
- (id)status;

@end