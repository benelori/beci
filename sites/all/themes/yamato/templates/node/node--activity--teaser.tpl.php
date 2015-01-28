<div class="col-xs-12 col-sm-3 col-md-3 col-lg-3 activities">
  <a href="<?php print $node_url?>">
    <div class="box-yamato">
      <ul class="box box1">
        <li class="box-icon">
          <?php print render($content['field_logo']); ?>
        </li>
        <li class="box-header">
          <h4><?php print $title; ?></h4>
        </li>
        <li class="box-text"><?php print render($content['field_summary']); ?></li>
      </ul>
    </div>
  </a>
  <p></p>
</div>