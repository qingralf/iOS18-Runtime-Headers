/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
 */

@interface MXAdditiveRoutingManager : NSObject {
    NSDictionary * _detailedRoutesDescription;
    NSArray * _mostRecentActiveSessions;
    NSDictionary * _vadIDToName;
    NSDictionary * _vadNameToID;
}

@property (retain) NSDictionary *detailedRoutesDescription;
@property (retain) NSArray *mostRecentActiveSessions;
@property (retain) NSDictionary *vadIDToName;
@property (retain) NSDictionary *vadNameToID;

+ (id)sharedInstance;

- (id)copyActiveSessionsInfo;
- (id)copyActiveVoiceOverSessionPlayingToOnDemandVAD;
- (id)copyAndUpdateSessionInformation:(id)arg1;
- (id)copyDetailedRouteDescription:(unsigned int)arg1;
- (id)copySessionWithAudioSessionID:(unsigned int)arg1;
- (void)dealloc;
- (id)detailedRoutesDescription;
- (id)init;
- (id)mostRecentActiveSessions;
- (int)sendActiveSessionsInfoToVA;
- (void)setDetailedRoutesDescription:(id)arg1;
- (void)setMostRecentActiveSessions:(id)arg1;
- (void)setVadIDToName:(id)arg1;
- (void)setVadNameToID:(id)arg1;
- (void)updateDetailedRouteDescription:(unsigned int)arg1;
- (id)vadIDToName;
- (id)vadNameToID;

@end