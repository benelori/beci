<div id="node-<?php print $node->nid; ?>" class="<?php print $classes; ?> clearfix"<?php print $attributes; ?>>
	<div class="blog-image">
			<?php print render($content['field_media']);?>
	</div>
	<?php print render($title_prefix); ?>
	<h3 class="blog-title" <?php print $title_attributes; ?>><a href="<?php print $node_url; ?>"><?php print $title; ?></a></h3>
	<?php print render($title_suffix); ?>  
	<div class="blog-date">
		 <span><i class="fa fa-pencil"></i><?php print format_date($created,'custom','d M Y');?></span>
	</div>   
	<div class="blog-content">
			<?php print render($content['body']);?>
	</div>
</div>