/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WorkflowResponsiveness.framework/WorkflowResponsiveness
 */

@interface WRSignpost : NSObject {
    NSString * _category;
    NSArray * _diagnostics;
    NSArray * _environmentFieldNames;
    NSString * _eventIdentifierFieldName;
    bool  _eventIdentifierIsSignpostID;
    bool  _hasDiagnosticThresholdInterval;
    NSString * _individuationFieldName;
    NSString * _name;
    bool  _networkBound;
    NSString * _subsystem;
}

@property (readonly) NSString *category;
@property (readonly) int diagnosticThresholdCount;
@property (readonly) double diagnosticThresholdIntervalSeconds;
@property (readonly) NSArray *diagnostics;
@property (readonly) NSArray *environmentFieldNames;
@property (readonly) NSString *eventIdentifierFieldName;
@property (readonly) bool eventIdentifierIsSignpostID;
@property (readonly) bool hasDiagnosticThresholdCount;
@property (readonly) bool hasDiagnosticThresholdInterval;
@property (readonly) NSString *individuationFieldName;
@property (readonly) NSString *name;
@property (readonly) bool networkBound;
@property (readonly) NSString *subsystem;

- (void).cxx_destruct;
- (id)category;
- (long long)compare:(id)arg1;
- (id)debugDescription;
- (int)diagnosticThresholdCount;
- (double)diagnosticThresholdIntervalSeconds;
- (id)diagnostics;
- (id)environmentFieldNames;
- (id)eventIdentifierFieldName;
- (bool)eventIdentifierIsSignpostID;
- (bool)hasDiagnosticThresholdCount;
- (bool)hasDiagnosticThresholdInterval;
- (unsigned long long)hash;
- (id)individuationFieldName;
- (id)initWithSubsystem:(id)arg1 category:(id)arg2 name:(id)arg3 eventIdentifierFieldName:(id)arg4 individuationFieldName:(id)arg5 environmentFieldNames:(id)arg6 networkBound:(bool)arg7 diagnostics:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)name;
- (bool)networkBound;
- (id)subsystem;

@end
