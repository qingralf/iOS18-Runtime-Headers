/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HearingUtilities.framework/HearingUtilities
 */

@interface HUSessionManager : NSObject {
    <HUSessionManagerDelegate> * _delegate;
    bool  _isMacSleep;
}

@property (nonatomic) <HUSessionManagerDelegate> *delegate;
@property (nonatomic, readonly) bool isMacSleep;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (bool)isMacSleep;
- (void)registerForSessionNotifications;
- (void)setDelegate:(id)arg1;
- (void)unregisterForSessionNotifications;
- (void)userLoggedOut:(id)arg1;

@end