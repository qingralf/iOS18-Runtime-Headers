/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
 */

@interface BYGreenController : NSObject {
    int  _plistStateCache;
    NSArray * _relevantGreenKeys;
}

@property (nonatomic) int plistStateCache;

- (void).cxx_destruct;
- (unsigned long long)_effectivePlaceForLocaleRegionCode:(id)arg1;
- (id)_extractGreenValuesForEffectivePlace:(unsigned long long)arg1 desiredPlistState:(int)arg2;
- (id)_greenBinaryFilePath;
- (id)_greenPlistFilePath;
- (int)_readPlistState;
- (bool)_shouldWriteInformedDefaultPlist;
- (bool)_shouldWriteInitialPlist;
- (id)_skuRegionCode;
- (bool)_skuRegionCodeIsAmbiguous;
- (bool)_writeFilesWithPlist:(id)arg1 desiredPlistState:(int)arg2;
- (bool)_writePlistForLocaleRegionCode:(id)arg1 desiredPlistState:(int)arg2;
- (id)init;
- (int)plistStateCache;
- (void)setPlistStateCache:(int)arg1;
- (void)writeInformedDefaultPlistIfNecessaryForLocaleRegionCode:(id)arg1;
- (void)writeInitialPlistIfNecessary;

@end