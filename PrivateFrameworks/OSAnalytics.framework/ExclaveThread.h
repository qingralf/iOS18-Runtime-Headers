/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OSAnalytics.framework/OSAnalytics
 */

@interface ExclaveThread : NSObject {
    NSNumber * _schedulingContextId;
    NSMutableArray * _stackEntries;
}

@property (nonatomic, retain) NSNumber *schedulingContextId;
@property (nonatomic, retain) NSMutableArray *stackEntries;

- (void).cxx_destruct;
- (void)addStackEntries:(id)arg1;
- (id)schedulingContextId;
- (void)setSchedulingContextId:(id)arg1;
- (void)setStackEntries:(id)arg1;
- (id)stackEntries;

@end