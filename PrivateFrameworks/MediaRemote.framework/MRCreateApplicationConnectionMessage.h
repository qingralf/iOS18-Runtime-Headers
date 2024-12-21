/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRCreateApplicationConnectionMessage : MRProtocolMessage

@property (nonatomic, readonly) MRApplicationConnectionContext *context;
@property (nonatomic, readonly) MRApplicationConnectionRequestInfo *requestInfo;

- (id)context;
- (id)initWithConnectionContext:(id)arg1 requestInfo:(id)arg2;
- (id)requestInfo;
- (unsigned long long)type;

@end