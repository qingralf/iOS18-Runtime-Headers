/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SafariSharedUI.framework/SafariSharedUI
 */

@interface WBSBrowsingAssistantAvailabilityLabels : NSObject {
    NSArray * _icons;
    NSArray * _labels;
    unsigned long long  _previouslyConsumedOptions;
    NSArray * _representedOptions;
    NSArray * _representedOptionsGroups;
}

@property (nonatomic, readonly) unsigned long long count;

+ (id)possibleLabelsForContentOptions:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)debugDescription;
- (id)description;
- (id)initWithContentOptions:(unsigned long long)arg1 template:(long long)arg2;
- (id)initWithRepresentedOptions:(id)arg1 groups:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)possibleLabelsByIncorporatingContentOptions:(unsigned long long)arg1 intoLabelsAfterIndex:(unsigned long long)arg2;
- (unsigned long long)representedOptionsAtIndex:(unsigned long long)arg1;
- (bool)representsSupersetOfContentOptions:(unsigned long long)arg1;
- (id)textForOptionsAtIndex:(unsigned long long)arg1;

@end