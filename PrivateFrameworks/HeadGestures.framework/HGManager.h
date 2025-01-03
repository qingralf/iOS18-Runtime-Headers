/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HeadGestures.framework/HeadGestures
 */

@interface HGManager : NSObject {
    HGConfiguration * _configuration;
    HGManagerInternal * _internal;
    bool  _muteAudioFeedback;
    bool  _requestPartGestures;
}

@property (nonatomic, retain) HGConfiguration *configuration;
@property (readonly) HGManagerInternal *internal;
@property (nonatomic) bool muteAudioFeedback;
@property (nonatomic) bool requestPartGestures;

- (void).cxx_destruct;
- (id)configuration;
- (id)initWithDelegate:(id)arg1 config:(id)arg2;
- (id)internal;
- (bool)muteAudioFeedback;
- (bool)requestPartGestures;
- (void)setConfiguration:(id)arg1;
- (void)setMuteAudioFeedback:(bool)arg1;
- (void)setRequestPartGestures:(bool)arg1;
- (void)start;
- (void)stop;
- (void)stopWithCompletionHandler:(id /* block */)arg1;

@end
