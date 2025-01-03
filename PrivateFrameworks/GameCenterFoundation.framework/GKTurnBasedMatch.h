/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate> {
    NSArray * _exchanges;
    GKTurnBasedMatchInternal * _internal;
    NSArray * _participants;
    unsigned int  _state;
}

@property (nonatomic, readonly) NSArray *activeExchanges;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *bundleVersion;
@property (nonatomic, readonly) NSArray *completedExchanges;
@property (nonatomic, readonly) NSDate *creationDate;
@property (nonatomic, retain) GKTurnBasedParticipant *currentParticipant;
@property (nonatomic, readonly) GKPlayer *currentPlayer;
@property (nonatomic, readonly) NSDate *dateSortKey;
@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long exchangeDataMaximumSize;
@property (nonatomic, readonly) unsigned long long exchangeMaxInitiatedExchangesPerPlayer;
@property (nonatomic, readonly) NSArray *exchanges;
@property (nonatomic, readonly) GKTurnBasedParticipant *firstWinnerOrTiedOrLastLoser;
@property (nonatomic, readonly) GKGame *game;
@property (readonly) unsigned long long hash;
@property (retain) GKTurnBasedMatchInternal *internal;
@property (nonatomic, readonly) bool isMyTurn;
@property (nonatomic, copy) NSDate *lastTurnDate;
@property (nonatomic, readonly) bool localPlayerHasRecentTurn;
@property (nonatomic, readonly) GKTurnBasedParticipant *localPlayerParticipant;
@property (nonatomic, readonly) NSData *matchData;
@property (nonatomic) unsigned long long matchDataMaximumSize;
@property (nonatomic, readonly) NSString *matchID;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) NSArray *participants;
@property (nonatomic, readonly) long long platform;
@property (nonatomic, readonly) GKTurnBasedParticipant *playingWithParticipantOrFirstKnownPlayer;
@property (nonatomic, readonly) GKTurnBasedParticipant *previousParticipant;
@property (nonatomic, readonly) GKTurnBasedParticipant *previousParticipantOrFirstKnownPlayer;
@property (nonatomic, retain) NSString *shortBundleVersion;
@property (nonatomic, readonly) GKPlayer *showcasePlayer;
@property (nonatomic) unsigned int state;
@property (nonatomic, readonly) long long status;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long turnNumber;

// Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation

+ (id)_localizableMessageWithKey:(id)arg1 arguments:(id)arg2 defaultMessage:(id)arg3;
+ (void)findMatchForRequest:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)getTurnBasedBadgeCountWithHandler:(id /* block */)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (id)keyPathsForValuesAffectingStatus;
+ (void)loadMatchWithID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadMatchesIncludingCompatibleBundleID:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadMatchesWithCompletionHandler:(id /* block */)arg1;
+ (void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg1 loadGameData:(bool)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)loadTurnBasedMatchSummaries:(id /* block */)arg1;
+ (void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadTurnBasedMatchWithDetailsForMatchID:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (id)matchesWithInternalRepresentations:(id)arg1;

- (void).cxx_destruct;
- (id)_exchangesForInternalRepresentation:(id)arg1 participants:(id)arg2;
- (id)_participantsForInternalRepresentation:(id)arg1;
- (void)_updateWithInternal:(id)arg1;
- (void)acceptInviteWithCompletionHandler:(id /* block */)arg1;
- (id)activeExchanges;
- (long long)compare:(id)arg1;
- (id)completedExchanges;
- (id)currentParticipant;
- (id)currentPlayer;
- (id)daemonProxy;
- (id)dateSortKey;
- (void)declineInviteWithCompletionHandler:(id /* block */)arg1;
- (id)description;
- (void)endMatchInTurnWithMatchData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)endMatchInTurnWithMatchData:(id)arg1 leaderboardScores:(id)arg2 achievements:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)endMatchInTurnWithMatchData:(id)arg1 scores:(id)arg2 achievements:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)endTurnWithNextParticipant:(id)arg1 matchData:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)endTurnWithNextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(id)arg3 completionHandler:(id /* block */)arg4;
- (unsigned long long)exchangeDataMaximumSize;
- (id)exchangeForID:(id)arg1;
- (unsigned long long)exchangeMaxInitiatedExchangesPerPlayer;
- (id)exchanges;
- (id)firstWinnerOrTiedOrLastLoser;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)game;
- (unsigned long long)hash;
- (id)indexesForParticipants:(id)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (bool)isEqual:(id)arg1;
- (bool)isMyTurn;
- (void)loadMatchDataWithCompletionHandler:(id /* block */)arg1;
- (void)loadURLWithMatchRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)localPlayerHasRecentTurn;
- (id)localPlayerParticipant;
- (unsigned long long)matchDataMaximumSize;
- (id)message;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipant:(id)arg2 matchData:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)participantQuitInTurnWithOutcome:(long long)arg1 nextParticipants:(id)arg2 turnTimeout:(double)arg3 matchData:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)participantQuitOutOfTurnWithOutcome:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)participants;
- (id)playingWithParticipantOrFirstKnownPlayer;
- (id)previousParticipant;
- (id)previousParticipantOrFirstKnownPlayer;
- (void)rematchWithCompletionHandler:(id /* block */)arg1;
- (void)removeWithCompletionHandler:(id /* block */)arg1;
- (void)reserveShareParticipantSlots:(long long)arg1 minPlayerCount:(long long)arg2 maxPlayerCount:(long long)arg3 andInvitePlayers:(id)arg4 withMessage:(id)arg5 handler:(id /* block */)arg6;
- (bool)respondsToSelector:(SEL)arg1;
- (void)saveCurrentTurnWithMatchData:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)saveMergedMatchData:(id)arg1 withResolvedExchanges:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)sendExchangeToParticipants:(id)arg1 data:(id)arg2 localizableMessageKey:(id)arg3 arguments:(id)arg4 timeout:(double)arg5 completionHandler:(id /* block */)arg6;
- (void)sendReminderToParticipants:(id)arg1 localizableMessageKey:(id)arg2 arguments:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)setCurrentParticipant:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setLocalizableMessageWithKey:(id)arg1 arguments:(id)arg2;
- (void)setMessage:(id)arg1;
- (void)setState:(unsigned int)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)showcasePlayer;
- (unsigned int)state;
- (long long)status;
- (id)valueForUndefinedKey:(id)arg1;

// Image: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI

- (bool)isAllAutomatchedPlayer;
- (id)matchTitle;
- (id)showcasePlayer;

@end
