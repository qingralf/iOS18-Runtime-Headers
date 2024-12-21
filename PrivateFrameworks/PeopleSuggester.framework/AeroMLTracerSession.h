/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PeopleSuggester.framework/PeopleSuggester
 */

@interface AeroMLTracerSession : NSObject {
    NSString * _projectName;
    NSObject<OS_os_log> * _traceChannel;
    NSString * _traceId;
    NSObject<OS_os_log> * _traceSignpost;
}

@property (nonatomic, readonly, copy) NSString *projectName;
@property (nonatomic, retain) NSObject<OS_os_log> *traceChannel;
@property (nonatomic, readonly, copy) NSString *traceId;
@property (nonatomic, retain) NSObject<OS_os_log> *traceSignpost;

+ (id)generateTraceId;
+ (id)logChannelWithSubsystem:(const char *)arg1 category:(const char *)arg2;

- (void).cxx_destruct;
- (id)createRootSpanWithName:(id)arg1;
- (id)createSubSpanWithName:(id)arg1 parentSpanId:(id)arg2;
- (id)initWithProjectName:(id)arg1;
- (id)initWithTraceId:(id)arg1 projectName:(id)arg2;
- (id)projectName;
- (void)setTraceChannel:(id)arg1;
- (void)setTraceSignpost:(id)arg1;
- (id)traceChannel;
- (id)traceId;
- (id)traceSignpost;

@end