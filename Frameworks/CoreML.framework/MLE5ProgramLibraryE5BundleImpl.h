/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLE5ProgramLibraryE5BundleImpl : NSObject <MLE5ProgramLibraryImpl> {
    MLModelConfiguration * _configuration;
    NSURL * _e5BundleURL;
}

@property (nonatomic, readonly) MLModelConfiguration *configuration;
@property (nonatomic, readonly) NSURL *e5BundleURL;
@property (nonatomic, readonly, copy) NSString *modelDisplayName;
@property (nonatomic, readonly, copy) NSString *serializedMILText;

- (void).cxx_destruct;
- (id)configuration;
- (struct e5rt_program_library { }*)createProgramLibraryHandleWithRespecialization:(bool)arg1 error:(id*)arg2;
- (id)e5BundleURL;
- (id)initWithE5BundleAtURL:(id)arg1 configuration:(id)arg2;
- (id)modelDisplayName;
- (id)serializedMILText;

@end
