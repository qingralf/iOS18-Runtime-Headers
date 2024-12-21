/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CDMFoundation.framework/CDMFoundation
 */

@interface CDMAssetsFactorConfig : NSObject {
    NSMutableDictionary * _factorToFoldersMapping;
    NSMutableDictionary * _factorToIsRequiredMapping;
}

@property (nonatomic, readonly) NSMutableDictionary *factorToFoldersMapping;
@property (nonatomic, readonly) NSMutableDictionary *factorToIsRequiredMapping;

- (void).cxx_destruct;
- (void)addEntriesFromCDMAssetsFactorConfig:(id)arg1;
- (id)factorToFoldersMapping;
- (id)factorToIsRequiredMapping;
- (id)getAllFactors;
- (id)getFactorToFoldersMapping;
- (id)getFactorToIsRequiredMapping;
- (id)getFoldersForFactor:(id)arg1;
- (id)initWithFactorToFoldersMapping:(id)arg1;
- (bool)isFactorRequired:(id)arg1;
- (void)setFactorToIsRequiredMapping:(id)arg1;
- (void)setIsRequiredForFactor:(id)arg1 isRequired:(bool)arg2;

@end