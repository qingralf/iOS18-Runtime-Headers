/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSpeechFoundation.framework/CoreSpeechFoundation
 */

@interface CSFMil2bnnsCompilationConfig : NSObject {
    bool  _debugInfo;
    NSString * _funcName;
    bool  _optimizeForSize;
    unsigned long long  _predefinedOptimizations;
    bool  _singleThread;
}

@property (nonatomic, readonly) bool debugInfo;
@property (nonatomic, readonly) NSString *funcName;
@property (nonatomic, readonly) bool optimizeForSize;
@property (nonatomic, readonly) unsigned long long predefinedOptimizations;
@property (nonatomic, readonly) bool singleThread;

- (void).cxx_destruct;
- (bool)debugInfo;
- (id)funcName;
- (id)initWithConfigPath:(id)arg1 errOut:(id*)arg2;
- (bool)optimizeForSize;
- (unsigned long long)predefinedOptimizations;
- (bool)singleThread;

@end
