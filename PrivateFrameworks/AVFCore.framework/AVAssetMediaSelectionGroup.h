/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVAssetMediaSelectionGroup : AVMediaSelectionGroup {
    AVAsset * _asset;
    AVMediaSelectionOption * _defaultOption;
    NSDictionary * _dictionary;
    NSArray * _groupMediaCharacteristics;
    bool  _isStreamingGroup;
    NSDictionary * _localizedMediaSelectionOptionDisplayNames;
    NSArray * _options;
}

- (id)_groupMediaCharacteristics;
- (bool)_isStreamingGroup;
- (id)_localizedMediaSelectionOptionDisplayNames;
- (id)_mediaSelectionOptionWithPropertyList:(id)arg1 matchToMediaSelectionArray:(bool)arg2;
- (id)_optionWithID:(id)arg1 displaysNonForcedSubtitles:(bool)arg2 audioCompositionPresetIndex:(id)arg3;
- (id)_optionWithID:(id)arg1 identifier:(id)arg2 source:(id)arg3 displaysNonForcedSubtitles:(bool)arg4 audioCompositionPresetIndex:(id)arg5;
- (id)asset;
- (void)dealloc;
- (id)defaultOption;
- (id)dictionary;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAsset:(id)arg1 dictionary:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mediaSelectionOptionWithPropertyList:(id)arg1;
- (id)mediaSelectionOptionWithPropertyListMatchToMediaSelectionArray:(id)arg1;
- (id)options;

@end