/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HangTracerSettingsClient.framework/HangTracerSettingsClient
 */

@interface HTProcessExitFilteringConfiguration : NSObject <NSSecureCoding> {
    NSArray * _allowedProcessNames;
    unsigned long long  _allowedReasons;
    NSDictionary * _allowedSubReasons;
    bool  _allowsAllProcesses;
    bool  _allowsCriticalProcesses;
}

@property (nonatomic, retain) NSArray *allowedProcessNames;
@property (nonatomic) unsigned long long allowedReasons;
@property (nonatomic, retain) NSDictionary *allowedSubReasons;
@property (nonatomic) bool allowsAllProcesses;
@property (nonatomic) bool allowsCriticalProcesses;

+ (id)configurationAllowingAllProcesses:(bool)arg1 criticalProcesses:(bool)arg2 processNames:(id)arg3 reasons:(unsigned long long)arg4 subReasons:(id)arg5;
+ (id)configurationFromPrefs:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedProcessNames;
- (unsigned long long)allowedReasons;
- (id)allowedSubReasons;
- (bool)allowsAllProcesses;
- (bool)allowsCriticalProcesses;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAllowedProcessNames:(id)arg1;
- (void)setAllowedReasons:(unsigned long long)arg1;
- (void)setAllowedSubReasons:(id)arg1;
- (void)setAllowsAllProcesses:(bool)arg1;
- (void)setAllowsCriticalProcesses:(bool)arg1;

@end