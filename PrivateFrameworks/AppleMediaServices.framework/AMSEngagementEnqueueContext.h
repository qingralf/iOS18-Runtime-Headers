/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSEngagementEnqueueContext : NSObject {
    AMSEngagementEnqueueRequest * _request;
    unsigned long long  _signpostID;
    NSDate * _start;
}

@property (nonatomic, retain) AMSEngagementEnqueueRequest *request;
@property (nonatomic) unsigned long long signpostID;
@property (nonatomic, retain) NSDate *start;

- (void).cxx_destruct;
- (id)init;
- (id)request;
- (void)setRequest:(id)arg1;
- (void)setSignpostID:(unsigned long long)arg1;
- (void)setStart:(id)arg1;
- (unsigned long long)signpostID;
- (id)start;

@end
