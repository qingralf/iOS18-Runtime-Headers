/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/IntelligencePlatformCore.framework/IntelligencePlatformCore
 */

@interface IntelligencePlatformCore.ViewAccessAssertion : NSObject <GDViewAccessAssertion> {
    void alwaysAvailable;
    void viewArtifactTableName;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  viewArtifactURL;
    void viewName;
}

@property (nonatomic, readonly) bool alwaysAvailable;
@property (nonatomic, readonly) NSString *viewArtifactTableName;
@property (nonatomic, readonly) NSURL *viewArtifactURL;
@property (nonatomic, readonly) NSString *viewName;

- (void).cxx_destruct;
- (bool)alwaysAvailable;
- (id)init;
- (id)viewArtifactTableName;
- (id)viewArtifactURL;
- (id)viewName;

@end