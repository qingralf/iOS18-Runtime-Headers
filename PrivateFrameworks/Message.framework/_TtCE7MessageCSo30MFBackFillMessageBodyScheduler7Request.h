/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _TtCE7MessageCSo30MFBackFillMessageBodyScheduler7Request : NSObject <MFBackFillingMessageBodyDownloadRequest> {
    void _deferred;
    void activity;
    void activityID;
    void id;
}

@property (nonatomic, readonly) unsigned short backFillID;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool shouldDefer;

- (void).cxx_destruct;
- (unsigned short)backFillID;
- (void)completeWithStatus:(int)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (bool)shouldDefer;

@end