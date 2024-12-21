/* Generated by RuntimeBrowser.
 */

@protocol VISTextDetectionPostProcessConfig <NSObject>

@required

- (bool)enable_text_bbox_size_suppress;
- (bool)enable_text_bounding_box_merge;
- (bool)enable_text_bounding_box_suppress;
- (bool)enable_text_confidence_suppress;
- (bool)enable_text_font_size_suppress;
- (bool)enable_text_negative_objects_suppress;
- (float)font_size_suppress_threshold;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (float)padding_for_text_result_merge;
- (void)setEnable_text_bbox_size_suppress:(bool)arg1;
- (void)setEnable_text_bounding_box_merge:(bool)arg1;
- (void)setEnable_text_bounding_box_suppress:(bool)arg1;
- (void)setEnable_text_confidence_suppress:(bool)arg1;
- (void)setEnable_text_font_size_suppress:(bool)arg1;
- (void)setEnable_text_negative_objects_suppress:(bool)arg1;
- (void)setFont_size_suppress_threshold:(float)arg1;
- (void)setPadding_for_text_result_merge:(float)arg1;
- (void)setText_bbox_size_suppress_threshold:(float)arg1;
- (void)setText_confidence_suppress_threshold:(float)arg1;
- (void)setText_merge_iou_threshold:(float)arg1;
- (void)setText_suppress_iou_threshold:(float)arg1;
- (float)text_bbox_size_suppress_threshold;
- (float)text_confidence_suppress_threshold;
- (float)text_merge_iou_threshold;
- (float)text_suppress_iou_threshold;

@end