/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PromotedContent.framework/PromotedContent
 */

@interface APPCMetric : NSObject <APPCMetricable> {
    void contentId;
    void metric;
    void properties;
    void purpose;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timestamp;
}

@property (nonatomic, copy) NSString *contentId;
@property (nonatomic) long long metric;
@property (nonatomic, copy) NSDictionary *properties;
@property (nonatomic) long long purpose;
@property (nonatomic, copy) NSDate *timestamp;

- (void).cxx_destruct;
- (id)contentId;
- (id)init;
- (long long)metric;
- (id)properties;
- (long long)purpose;
- (void)setContentId:(id)arg1;
- (void)setMetric:(long long)arg1;
- (void)setProperties:(id)arg1;
- (void)setPurpose:(long long)arg1;
- (void)setTimestamp:(id)arg1;
- (id)timestamp;

@end