/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SADIAGLatencyDiagnosticReportDiagnosticReport : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *latency;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSURL *uri;
@property (nonatomic, copy) NSString *verb;

+ (id)latencyDiagnosticReportDiagnosticReport;
+ (id)latencyDiagnosticReportDiagnosticReportWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)latency;
- (void)setLatency:(id)arg1;
- (void)setUri:(id)arg1;
- (void)setVerb:(id)arg1;
- (id)uri;
- (id)verb;

@end
