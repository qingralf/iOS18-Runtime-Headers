/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FocusEngine.framework/FocusEngine
 */

@interface _FEFocusUpdateReport : NSObject {
    _FEFocusUpdateContext * _context;
    _FEFocusSystem * _focusSystem;
}

@property (nonatomic, retain) _FEFocusUpdateContext *context;
@property (nonatomic, readonly) _FEFocusSystem *focusSystem;
@property (nonatomic, readonly) bool shouldLog;

- (void).cxx_destruct;
- (id)context;
- (id)focusSystem;
- (id)init;
- (id)initWithFocusSystem:(id)arg1;
- (void)setContext:(id)arg1;
- (bool)shouldLog;

@end
