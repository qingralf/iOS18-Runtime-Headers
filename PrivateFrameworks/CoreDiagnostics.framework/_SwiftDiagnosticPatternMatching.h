/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreDiagnostics.framework/CoreDiagnostics
 */

@interface _SwiftDiagnosticPatternMatching : NSObject {
    void asyncQueue;
    void patternMatcher;
    void type;
}

- (void).cxx_destruct;
- (int)getMatcherType;
- (id)init;
- (id)initWithType:(int)arg1;
- (bool)isPatternPayloadAvailable;
- (bool)lookForPattern:(id)arg1 :(bool)arg2;
- (void)lookForPatternAsync:(id)arg1 :(bool)arg2 :(id /* block */)arg3;

@end
