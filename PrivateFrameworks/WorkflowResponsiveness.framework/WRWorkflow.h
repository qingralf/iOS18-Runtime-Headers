/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowResponsiveness.framework/WorkflowResponsiveness
 */

@interface WRWorkflow : NSObject <WRDictEncoding> {
    NSArray * _allSignposts;
    SignpostSupportSubsystemCategoryAllowlist * _allowListForAllSignposts;
    SignpostSupportSubsystemCategoryAllowlist * _allowListForDiagnostics;
    bool  _contextualTelemetryEnabled;
    NSString * _contextualTelemetryRawValue;
    NSArray * _endSignpostGroups;
    double  _maximumEventDuration;
    NSString * _name;
    NSArray * _startSignposts;
    NSArray * _workflowDiagnostics;
    bool  _workflowSupportsConcurrentEvents;
}

@property (readonly) NSArray *allSignposts;
@property (readonly) SignpostSupportSubsystemCategoryAllowlist *allowList;
@property (readonly) SignpostSupportSubsystemCategoryAllowlist *allowListForAllSignposts;
@property (readonly) SignpostSupportSubsystemCategoryAllowlist *allowListForDiagnostics;
@property (readonly) bool contextualTelemetryEnabled;
@property (readonly) NSString *contextualTelemetryRawValue;
@property (readonly) NSArray *endSignpostGroups;
@property (readonly) bool hasMaximumEventDuration;
@property (readonly) bool hasOverallDiagnosticThresholdInterval;
@property (readonly) double maximumEventDuration;
@property (readonly) NSString *name;
@property (readonly) double overallDiagnosticThresholdIntervalSeconds;
@property (readonly) NSArray *startSignposts;
@property (readonly) NSArray *workflowDiagnostics;
@property (readonly) bool workflowSupportsConcurrentEvents;

+ (id)allWorkflows;
+ (id)makeOverridePlistDirectoryWithError:(id*)arg1;
+ (id)overridePlistDirectory;
+ (id)workflowWithName:(id)arg1;
+ (id)workflowWithPlist:(id)arg1 checkForOverrides:(bool)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)allSignposts;
- (id)allowList;
- (id)allowListForAllSignposts;
- (id)allowListForDiagnostics;
- (long long)compare:(id)arg1;
- (bool)contextualTelemetryEnabled;
- (id)contextualTelemetryRawValue;
- (id)debugDescription;
- (id)encodedDict;
- (id)endSignpostGroups;
- (bool)hasChangesRelativeTo:(id)arg1;
- (bool)hasMaximumEventDuration;
- (bool)hasOverallDiagnosticThresholdInterval;
- (unsigned long long)hash;
- (id)initWithEncodedDict:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (double)maximumEventDuration;
- (id)name;
- (double)overallDiagnosticThresholdIntervalSeconds;
- (id)startSignposts;
- (id)workflowDiagnostics;
- (bool)workflowSupportsConcurrentEvents;

@end