/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCMediaRemoteControllerPlaybackQueue : NSObject {
    NSArray * _identifiers;
    NSString * _playingIdentifier;
    NSString * _queueIdentifier;
    NSDictionary * _queueProperties;
}

@property (nonatomic, readonly) NSArray *identifiers;
@property (nonatomic, readonly) NSString *playingIdentifier;
@property (nonatomic, readonly) NSString *queueIdentifier;
@property (nonatomic, readonly) NSDictionary *queueProperties;

- (void).cxx_destruct;
- (id)identifiers;
- (id)initWithIdentifiers:(id)arg1 playingIdentifier:(id)arg2 queueIdentifier:(id)arg3 queueProperties:(id)arg4;
- (id)playingIdentifier;
- (id)queueIdentifier;
- (id)queueProperties;

@end
