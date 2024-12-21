/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MROriginClientPropertiesMessage : MRProtocolMessage

@property (nonatomic, readonly) NSString *devicePlaybackSessionID;
@property (nonatomic, readonly) NSDate *lastPlayingDate;

- (id)devicePlaybackSessionID;
- (id)initWithLastPlayingDate:(id)arg1 devicePlaybackSessionID:(id)arg2;
- (id)lastPlayingDate;
- (unsigned long long)type;

@end