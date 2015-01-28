<div id="node-<?php print $node->nid; ?>" class="blog-teaser blog-new-style2 <?php print $classes; ?> clearfix"<?php print $attributes; ?>>

  <div class="blog-header">
    <?php print render($title_prefix); ?>
    <h3 class="blog-title" <?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
    <?php print render($title_suffix); ?>
  </div>
  <div class="blog-image">
    <a href="<?php print $node_url; ?>"><?php print render($content['field_listing_image']);?></a>
  </div>

  <div class="blog-content">
    <?php print render($content['field_summary']);?>
  </div>
  <p><a href="<?php print $node_url; ?>" class="readmore">Read more</a></p>
</div>