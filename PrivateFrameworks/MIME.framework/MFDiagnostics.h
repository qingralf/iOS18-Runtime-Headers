/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFDiagnostics : NSObject <MFDiagnosticsGenerator> {
    NSLock * _diagnosticLock;
    MFWeakSet * _diagnosticsGenerators;
}

@property (readonly, copy) NSString *debugDescription; /* unknown property attribute: ? */
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedController;

- (void).cxx_destruct;
- (void)addDiagnosticsGenerator:(id)arg1;
- (id)copyDiagnosticInformation;
- (id)init;
- (void)removeDiagnosticsGenerator:(id)arg1;

@end
