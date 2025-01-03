/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleTranslationUtility 

// Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput

+ (id)_dotDescriptionForBrailleString:(id)arg1;
+ (id)_japaneseIndicatorNameForBrailleString:(id)arg1;
+ (id)_spokenStringForBrailleString:(id)arg1 isDelete:(bool)arg2 speakLiterally:(out bool*)arg3 modifiers:(id)arg4;
+ (id)_translatedTextForPrefixBraille:(id)arg1 printBraille:(id)arg2 translationMode:(unsigned long long)arg3;
+ (id)_trimCommonPrefixWithString:(id)arg1 fromString:(id)arg2;
+ (id)spokenStringForDeletedBrailleString:(id)arg1 speakLiterally:(out bool*)arg2;
+ (id)spokenStringForInsertedBrailleString:(id)arg1 speakLiterally:(out bool*)arg2 modifiers:(id)arg3;
+ (id)translatedTextInIsolationForBraille:(id)arg1 translationMode:(unsigned long long)arg2;

// Image: /usr/lib/libobjc.A.dylib

+ (void)initialize;

@end
