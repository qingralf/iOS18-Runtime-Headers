/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DriverManagement.framework/DriverManagement
 */

@interface _SwiftDriverApprovalState : NSObject {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _approvalState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _updateStatus;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  driver;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *usageText;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)displayName;
- (bool)driverIsApproved;
- (id)init;
- (bool)updatePending;
- (id)usageText;

@end
