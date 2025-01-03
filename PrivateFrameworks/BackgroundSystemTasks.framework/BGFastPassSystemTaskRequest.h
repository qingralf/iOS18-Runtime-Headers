/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BackgroundSystemTasks.framework/BackgroundSystemTasks
 */

@interface BGFastPassSystemTaskRequest : BGNonRepeatingSystemTaskRequest {
    NSString * _processingTaskIdentifier;
    NSArray * _processingTaskIdentifiers;
    bool  _reRun;
    long long  _semanticVersion;
}

@property (nonatomic, copy) NSString *processingTaskIdentifier;
@property (nonatomic, copy) NSArray *processingTaskIdentifiers;
@property (nonatomic) bool reRun;
@property (nonatomic) long long semanticVersion;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)processingTaskIdentifier;
- (id)processingTaskIdentifiers;
- (bool)reRun;
- (long long)semanticVersion;
- (void)setProcessingTaskIdentifier:(id)arg1;
- (void)setProcessingTaskIdentifiers:(id)arg1;
- (void)setReRun:(bool)arg1;
- (void)setSemanticVersion:(long long)arg1;

@end
