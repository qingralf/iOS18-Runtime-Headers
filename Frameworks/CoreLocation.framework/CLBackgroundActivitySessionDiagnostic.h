/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLBackgroundActivitySessionDiagnostic : NSObject {
    unsigned long long  _diagnostics;
}

@property (nonatomic, readonly) bool authorizationDenied;
@property (nonatomic, readonly) bool authorizationDeniedGlobally;
@property (nonatomic, readonly) bool authorizationRequestInProgress;
@property (nonatomic, readonly) bool authorizationRestricted;
@property (nonatomic, readonly) bool insufficientlyInUse;
@property (nonatomic, readonly) bool serviceSessionRequired;

- (bool)authorizationDenied;
- (bool)authorizationDeniedGlobally;
- (bool)authorizationRequestInProgress;
- (bool)authorizationRestricted;
- (void)dealloc;
- (id)initWithDiagnostics:(unsigned long long)arg1;
- (bool)insufficientlyInUse;
- (bool)serviceSessionRequired;

@end