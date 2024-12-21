/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GamePolicy.framework/GamePolicy
 */

@interface GamePolicy.GameModeStatus : NSObject <NSSecureCoding> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  $__lazy_storage_$_config;
    void deviceSupported;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  disablementDate;
    void enabled;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  enablementDate;
    void enablementStrategy;
    void gameBundleIdentifiers;
    void impactedBundleIdentifiers;
    void jettisonCameraS2R;
    void previousGameBundleIdentifiers;
    void previouslyImpactedBundleIdentifiers;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end